/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:30:12 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/11 10:27:49 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	int fib_min_1 = 0;
	int fib_min_2 = 0;


	if ( index < 0)
		return (-1);
	if ( index == 0 ) 
		return (0);
	if ( index == 1)
		return (1);

	fib_min_1 = index - 1;
	fib_min_2 = index - 2; 

	return(ft_fibonacci(fib_min_1) + ft_fibonacci(fib_min_2));
} 

int main (void)
{
	int i;

	i = -1;
	while (i != 10)
	{
		printf("indice %d : %d\n",i,ft_fibonacci(i));
		i++;
	}
	
	return(0);
}
