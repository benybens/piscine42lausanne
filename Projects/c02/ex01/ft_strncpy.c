/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:58:00 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/06 02:56:15 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void)
{
	char source[] = "Helllo";
	char dest[] = "Wdgdfdf§orld" ;
	int n = 10;

	printf("%s\n",dest);
	ft_strncpy(&dest[0],&source[0],n);
	printf("%s\n",dest);
}*/
