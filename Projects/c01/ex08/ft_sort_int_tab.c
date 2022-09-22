/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:12:06 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/23 00:17:26 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int	main (void)
{
	int	tab[5];

	tab[0] = 1;
	tab[1] = 8;
	tab[2] = 3;
	tab[3] = 16;
	tab[4] = 5;
	
	ft_sort_int_tab(tab,5);

	int i;
	
	i = 0; 
	while (i < 5)
	{
		printf("%d\n",tab[i]);
		i++;
	}
}*/
