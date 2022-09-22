/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:49:48 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/21 17:56:34 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	empty_t_stock_str(t_stock_str *strs)
{
	strs->size = 0;
	strs->str = 0;
	strs->copy = 0;
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			j;

	i = 0;
	tab = malloc((ac + 1) * sizeof(tab));
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		j = 0;
		tab[i].str = malloc(sizeof(tab[i].str) * tab[i].size + 1);
		tab[i].copy = malloc(sizeof(tab[i].copy) * 1000 * tab[i].size + 1);
		if (tab[i].copy == NULL || tab[i].str == NULL || tab == NULL)
			return (NULL);
		while (av[i][j])
		{
			tab[i].str = av[i];
			tab[i].copy[j] = av[i][j];
			j++;
		}
	i++;
	}
	empty_t_stock_str(&tab[i]);
	return (tab);
}
/*
int main()
{
	t_stock_str *strs;
	int i;
	char **ptr;

	ptr = malloc (10000);
	ptr[0] = "Hello !";
	ptr[1] = "World";
	ptr[2] = "CanItryToPushSomehting";
	ptr[3] = "CanIomehting";

	i =0;
	strs = malloc (10000);
	strs = ft_strs_to_tab(4, ptr);
	while(i < 4)
	{
		printf("Size : %d, str: %s, copy : %s\n",
		strs[i].size,strs[i].str,strs[i].copy);
		i++;
	}
	return (0);
}*/
