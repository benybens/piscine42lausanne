/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:41:18 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 17:15:38 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "Ceci n'est pas une chaine de character.";

	printf("%lu\n",strlen(str));
	printf("%d\n",ft_strlen(str));
}*/
