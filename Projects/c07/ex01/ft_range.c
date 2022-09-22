/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:21:42 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/16 11:36:41 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	calc_range(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	range;
	int	*int_table;
	int	i;

	i = min;
	if (min >= max)
		return (NULL);
	range = calc_range(min, max);
	int_table = malloc ((range) * sizeof(int));
	while (i < max)
	{
		int_table[i - min] = i;
		i++;
	}
	return (int_table);
}
/*
void print_table(int *int_table,int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d\n",int_table[i]);
		i++;
	}

}

int main ( int argc, char *argv[])
{
	(void) argc;

	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int size = calc_range(min,max);

	(void) size;
	print_table(ft_range(min,max),size);

}*/
