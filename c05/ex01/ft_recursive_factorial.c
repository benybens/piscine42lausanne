/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:47:18 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/09 13:10:35 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int tmp;

	if ( nb == 0)
	{
		return (1);
	}
	tmp = 0;
	if(nb > 1)
	{
		tmp = ft_recursive_factorial(nb-1);
	}
	else
	{
		return (nb);
	}
	return(nb * tmp);
}

int main (void)
{
	printf("%d",ft_recursive_factorial(0));
	return (0);
}
