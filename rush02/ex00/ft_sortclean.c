/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortclean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprahin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:23:40 by aprahin           #+#    #+#             */
/*   Updated: 2022/09/18 23:02:48 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_functions.h"

void	ft_sort(char **tab)
{
	int					i;
	int					j;
	unsigned long		min;
	int					minpos;
	char				*temp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		min = ft_atoi(tab[i]);
		minpos = i;
		while (tab[j])
		{
			if (min > ft_atoi(tab[j]))
			{
				min = ft_atoi(tab[j]);
				minpos = j;
			}
			++j;
		}
		temp = tab[minpos];
		tab[minpos] = tab[i];
		tab[i++] = temp;
	}
}

void	ft_clean(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		if (ft_atoi(tab[i - 1]) == ft_atoi(tab[i]))
		{
			j = i;
			while (tab[j + 1])
			{
				tab[j] = tab[j + 1];
				j++;
			}
			tab[j] = 0;
			i--;
		}
		++i;
	}
}

void	ft_sortclean(char **tab)
{
	ft_sort(tab);
	ft_clean(tab);
}

/*#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	return (atoi(str));
}

int	main(void)
{
	int	i;

	char	**tab;
	tab = malloc(999999);
	while (i < 100)
		tab[i] = malloc(99999);
	tab[0] = "20";
	tab[1] = "30";
	tab[2] = "10aaa";
	tab[3] = "30dde";
	tab[4] = "40dsf";
	tab[5] = "20adfaj";
	tab[6] = "20asmogu";
	tab[7] = "20SO";
	tab[8] = "0";

	i = 0;
	ft_sortclean(tab);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		++i;
	}
	return (0);
}*/
