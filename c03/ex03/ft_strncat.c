/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:18:19 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 10:30:04 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int		j;
	unsigned int	i;

	j = 0;
	i = 0;

	while (dest[j])
	j++;

	while (src[i])
	{
		if (i < n)
			dest[j] = src[i];
		else
		{
			dest[j] = 0;
		}
		j++;
		i++;
	}
	dest[j] = 0 ;
	return (dest);
	
}

int	main(void)
{
	char	src[100] = "I am you father ...";
	char	dest[100] = "Nooooooooooooo !!!!!";
	char	src2[100] = "I am you father ...";
	char	dest2[100] = "Nooooooooooooo !!!!!";
	int	n = 10;

	printf("%s\n",ft_strncat(src,dest,n));
	printf("\n");
	printf("%s\n",strncat(src2,dest2,n));
	return (0);
}
