/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:39:12 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 18:43:57 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*checkstr(char *str, char *to_find, int *variables)
{
	variables[0] = variables[2];
	while (to_find[variables[1]])
	{
		if (to_find[variables[1]] == str[variables[2]])
		{
			variables[1]++;
			variables[2]++;
		}
		else
		{	
			variables[2] = variables[0];
			variables[1] = 0;
			break ;
		}
	}
	if (to_find[variables[1]] == 0)
		return (&str[variables[0]]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		variables[3];
	char	*found;

	variables[2] = 0;
	variables[1] = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[variables[2]])
	{
		if (to_find[variables[1]] == str[variables[2]])
		{
			found = checkstr(str, to_find, variables);
			if (found != 0)
				return (found);
		}
		variables[2]++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[] = "Metal Gear Solid V : Phantom Pain";
	char to_find[] = "Blue";

	printf("%s\n",strstr(str,to_find));
	printf("%s\n",ft_strstr(str,to_find));
}*/
