/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:12:05 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/09 13:31:57 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;

	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return res;

}

int main (void)
{
	printf("%d",ft_iterative_power(43,4));

	return (0);
}
