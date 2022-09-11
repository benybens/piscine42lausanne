/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:21:24 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/09 13:11:20 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0)
	{
		return (1);
	}
	res = nb;
	while (nb - 1 > 1)
	{
		res = res * (nb-1);
		nb--;
	}
	return (res);
}

int main (void)
{
	int	nb = 3;

	printf("%d\n",ft_iterative_factorial(nb));
	return(0);
}
