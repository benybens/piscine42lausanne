/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:41:41 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/07 09:43:30 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	firstletter;

	firstletter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (firstletter == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				firstletter = 0;
			}
		}
		else
		{	
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				firstletter = 1;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int  main (void)
{
	char	str[]="saLut test +un+deux+oui ;ca-joue +42 ?ok";
	printf("%s",ft_strcapitalize(str));
}*/
