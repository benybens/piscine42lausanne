/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:39:33 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/07 13:50:28 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp( char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
}

int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "Ailll:DFDFdfdfdfE";

	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",ft_strcmp(s1,s2));
	return (0);
}
