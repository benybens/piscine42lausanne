/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 00:11:34 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/06 00:19:05 by ybensegh         ###   ########.fr       */
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
	char source[] = "You were the chosen one Anakin";
	char dest[] = "You were a brother for me" ;
	int n = 10;

	printf("%s\n",dest);
	ft_strncpy(dest,src.,n);
	printf("%s\n",dest);
}
