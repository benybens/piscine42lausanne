/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:39:33 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/08 17:55:38 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp( char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	if ((s1[i] == 0) && (s2[i] == 0))
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i - 1] - s2[i - 1]);
}
/*
int	main(void)
{
	char	s1[] = "ree";
	char	s2[] = "";
	int	n;

	n = 0;
	while (n <= 5)
	{
		printf("%d\n",strncmp(s1,s2,n));
		printf("%d\n",ft_strncmp(s1,s2,n));
		n++;
	}
	return (0);
}*/
