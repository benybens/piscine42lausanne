/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:39:33 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/07 14:09:09 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp( char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i] && i < n)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i-1] - s2[i -1]);

}

int	main(void)
{
	char	s1[] = "ABCDgfgfg";
	char	s2[] = "ABCDilll:DFDFdfdfdfE";
	int	n;

	n = 5;
	printf("%d\n",strncmp(s1,s2,n));
	printf("%d\n",ft_strncmp(s1,s2,n));
	return (0);
}
