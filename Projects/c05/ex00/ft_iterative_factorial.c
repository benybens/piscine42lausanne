/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:37:08 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/13 11:26:26 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include<stdio.h>

int	main (void)
{	
	int n = 0;

	while (n < 10)
	{
		printf("%d\n",ft_iterative_factorial(n));
		n++;
	}
}*/
