/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:27:51 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/13 11:40:20 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	res = 1;
	i = power;
	while (i > 0)
	{
		res = res * nb;
		i--;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(2,4));
}*/
