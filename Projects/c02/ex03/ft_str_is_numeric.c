/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:12 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/05 14:56:07 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	
	strcpy(str,"");
	strcpy(str2,"1234");
	strcpy(str3,"0kfd");
	strcpy(str4,".87%");

	printf("%d\n",ft_str_is_numeric(&str[0]));
	printf("%d\n",ft_str_is_numeric(&str2[0]));
	printf("%d\n",ft_str_is_numeric(&str3[0]));
	printf("%d\n",ft_str_is_numeric(&str4[0]));
	
}*/
