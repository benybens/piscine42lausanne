/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:30:50 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/22 23:36:41 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

void	print_del(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	bnew;

	a = 0;
	b = 1;
	bnew = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			if (a < 10)
				ft_putchar('0');
			ft_putnbr(a);
			ft_putchar(' ');
			if (b < 10)
				ft_putchar('0');
			ft_putnbr(b);
			if (a < 98)
				print_del();
			b++;
		}
		b = ++bnew;
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}