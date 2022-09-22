/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:48:50 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/23 00:11:16 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(sizei - 1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}

/*
#include <stdio.h>
int	main (void)
{
	int	tab[5];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	
	ft_rev_int_tab(tab,5);

	int i;
	
	i = 0; 
	while (i < 5)
	{
		printf("%d\n",tab[i]);
		i++;
	}
}*/
