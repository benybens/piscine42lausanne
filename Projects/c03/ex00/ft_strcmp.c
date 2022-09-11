/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:23:51 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 10:49:59 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main (void) 
{
	char	s1[] = "ABCfdfd";
	char	s2[] = "AB";

	printf("target : %d",strcmp(s1,s2));
	printf("\n");
	printf("ex : %d",ft_strcmp(s1,s2));
		printf("\n");
}*/
