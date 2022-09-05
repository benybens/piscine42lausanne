/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 00:11:34 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/06 00:14:15 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
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
			while(i<n)
			{
				dest[i] = '\0'; 
				i++;
			}
		}
	}
	return dest;
}

int main (void)
{
	char source[20] = "Hel";
	char dest[20] = "World" ;
	int n = 5;

	printf("%s\n",dest);
	ft_strncpy(&dest[0],&source[0],n);
	printf("%s\n",dest);
}
