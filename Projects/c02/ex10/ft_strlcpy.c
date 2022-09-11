/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:46:29 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/07 09:55:18 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>

int  main (void)
{
	char	src[20] = "source charac";
	char	dest[20]= "dest charac";
	unsigned int size;

	size = 5;
	printf("%lu",strlcpy(src,dest,size));
	printf("\n");
	printf("%s\n",src);
	printf("%s\n",dest);

	char	src2[20] = "source charac";
	char	dest2[20]= "dest charac";
	printf("%u",ft_strlcpy(src2,dest2,size));
	printf("\n");
	printf("%s\n",src2);
	printf("%s\n",dest2);
}*/
