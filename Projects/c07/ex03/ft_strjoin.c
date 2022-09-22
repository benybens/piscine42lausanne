/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:20:42 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/21 10:12:29 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*emptymalloc(void)
{
	char	*dest;

	dest = malloc(sizeof(char));
	dest[0] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*dest;

	dest = malloc(1000 * sizeof(char) * size);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		l = 0;
		if (i < (size - 1))
		{
			while (sep[l])
				dest[k++] = sep[l++];
		}
		i++;
	}
	dest[k] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	**strs;

	strs = malloc(1000);
	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "Boom";
	strs[3] = "Test Micro";
	strs[4] = "One Two One Two";

	printf("%s",ft_strjoin(5,strs,"/ : /"));
}*/
