/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:56:27 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/05 15:03:02 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <string.h>
#include <stdio.h>

int  main (void)
{
	char	str[10] ;
	char 	str2[10];
	char 	str3[10];
	char 	str4[10];
	
	strcpy(str,"argh");
	strcpy(str2,"gfgFggf");
	strcpy(str3,"FFF");
	strcpy(str4,".87%");

	printf("%d\n",ft_str_is_lowercase(&str[0]));
	printf("%d\n",ft_str_is_lowercase(&str2[0]));
	printf("%d\n",ft_str_is_lowercase(&str3[0]));
	printf("%d\n",ft_str_is_lowercase(&str4[0]));
	
}*/
