/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:50:00 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/13 12:04:49 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonnaci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2));
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d\n",ft_fibonnaci(0));
	printf("%d\n",ft_fibonnaci(1));
	printf("%d\n",ft_fibonnaci(2));
	printf("%d\n",ft_fibonnaci(3));
	printf("%d\n",ft_fibonnaci(4));
	printf("%d\n",ft_fibonnaci(5));
	printf("%d\n",ft_fibonnaci(6));
}*/
