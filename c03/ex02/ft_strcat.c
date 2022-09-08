/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:18:19 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 10:26:29 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;

	while (dest[j])
	j++;

	while(src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = 0 ;
	return (dest);
	
}

int	main(void)
{
	char src[100] = "I am you father ...";
	char dest[100] = "Nooooooooooooo !!!!!";
	char src2[100] = "I am you father ...";
	char dest2[100] = "Nooooooooooooo !!!!!";

	printf("%s\n",ft_strcat(src,dest));
	printf("\n");
	printf("%s\n",strcat(src2,dest2));
	return (0);
}
