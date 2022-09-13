/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:53:45 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/13 11:27:06 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
/*
#include <stdio.h>
int main (void)
{
	int n = 0;

	while (n<10)
	{
		printf("%d\n",ft_recursive_factorial(n));
		n++;
	}
}*/
