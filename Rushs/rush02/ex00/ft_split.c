/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprahin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:24:51 by aprahin           #+#    #+#             */
/*   Updated: 2022/09/21 10:24:40 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	plus_plus(int *a, int *b)
{
	*a += 1;
	*b += 1;
}

int	count_char(char *str, char *charset)
{
	int		i;
	int		j;
	int		n;
	int		c;

	i = 0;
	n = 0;
	c = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j])
			{
				if (n > c + 1)
					c = ++n;
				--n;
				break ;
			}
			++j;
		}
		plus_plus(&n, &i);
	}
	return (n + 2);
}

int	contains(char s, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (s == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (contains(str[i], charset) == 1 && str[i] != '\0')
			++i;
		++n;
		while (contains(str[i], charset) == 0 && str[i] != '\0')
			++i;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**s;

	i = 0;
	j = 0;
	s = malloc(sizeof(char *) * count_str(str, charset) + 1);
	while (i < count_str(str, charset))
		s[i++] = malloc(sizeof(char) * count_char(str, charset));
	i = 0;
	while (contains(str[i], charset) == 1 && str[i] != '\0')
		++i;
	while (str[i] != '\0')
	{
		k = 0;
		while (contains(str[i], charset) == 0 && str[i] != '\0')
			s[j][k++] = str[i++];
		s[j][k] = '\0';
		while (contains(str[i], charset) == 1 && str[i] != '\0')
			++i;
		++j;
	}
	s[j] = 0;
	return (s);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**t;
	int	i;

	i = 0;
	if (argc == 3)
	{
		t = ft_split(argv[1], argv[2]);
		while (t[i])
		{
			printf("%s\n", t[i]);
			++i;
		}
	}
	return (0);
}*/
