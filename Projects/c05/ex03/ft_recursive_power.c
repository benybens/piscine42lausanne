/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:41:05 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/13 12:04:18 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power( int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(5,12));
}*/
