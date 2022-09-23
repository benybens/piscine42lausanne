/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprahin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:26:10 by aprahin           #+#    #+#             */
/*   Updated: 2022/09/18 23:02:49 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_functions.h"

int	p(int nb, int power);

char	*s(char *s1, char *s2)
{
	return (ft_strcat(s1, s2));
}

char	*g(int n, char **dict_table)
{
	return (get_element(n, dict_table));
}

char	*f(char **dict, unsigned long nbr)
{
	int	n;
	int	i;

	i = 0;
	if (nbr == 0)
		return ("\0");
	if (nbr <= 20)
		return (get_element(nbr, dict));
	if (nbr < 100)
		return (s(g((nbr / 10) * 10, dict), f(dict, nbr % 10)));
	n = nbr;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	if (nbr < 10000)
		return (s(s(f(dict, n), g(p(10, i), dict)),
				f(dict, nbr - n * p(10, i))));
	n = nbr;
	while (n >= p(10, i % 3 + 1))
		n /= 10;
	return (s(s(f(dict, n), g(p(10, i - (i % 3)), dict)),
			f(dict, nbr - n * p(10, i - (i % 3)))));
}

char	*ft_putnbr(char **dict, unsigned long nbr)
{
	return (f(dict, nbr));
}

int	p(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (nb * p(nb, power - 1));
	}
}
