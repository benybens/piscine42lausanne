/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:31:23 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/20 12:26:47 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		strlen;
	char	*strsave;
	int		i;

	i = 0;
	strlen = ft_strlen(src);
	strsave = malloc((strlen + 1) * sizeof(char));
	if (strsave == NULL)
		return (NULL);
	while (i <= strlen)
	{
		strsave[i] = src[i];
		i++;
	}
	return (strsave);
}
/*
int	main(int argc, char *argv[])
{
	char *str; 
	(void) argc;
	
	str = argv[1];
	printf("%s\n",strdup(str));
	printf("%s",ft_strdup(str));
	return (0);
}*/
