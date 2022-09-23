/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceccato <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:37:20 by kceccato          #+#    #+#             */
/*   Updated: 2022/09/18 23:02:47 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (src[0] == 0)
		return (dest);
	while (dest[i])
	{
		i++;
	}
	dest[i++] = ' ';
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
		dest[i + j] = '\0';
	return (dest);
}

unsigned long	ft_atoi(char *str)
{
	int				i;
	unsigned long	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}
