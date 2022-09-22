/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:11:10 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/21 10:07:21 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tmp;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	tmp = malloc(size * sizeof(int));
	if (tmp == 0)
		return (-1);
	while (min + i < max)
	{
		tmp[i] = min + i;
		i++;
	}
	*range = tmp;
	return (size);
}
/*
int main( int argc , char *argv[])
{
	(void) argc;
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int i = 0;
	int size = max - min;

	int **range = malloc(sizeof (int*));

	printf("Allocation d'un tableau de taille %d \n", 
	ft_ultimate_range(range, min, max));

	while (i < size)
	{
		printf("%d\n",range[0][i]);
		i++;
	}
}*/
