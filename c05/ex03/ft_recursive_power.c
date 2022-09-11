/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:33:37 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/10 10:28:33 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if(power > 1)
	{
	 	return (nb * ft_recursive_power(nb,power-1));
	}
	return nb;
}

int main(void)
{
	printf("%d\n",ft_recursive_power(47,3));
	return(0);
}
