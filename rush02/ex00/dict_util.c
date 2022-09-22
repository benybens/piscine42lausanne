/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:25:35 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/18 22:58:08 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	get_file_len(int filedes, char *buf)
{
	int	len;

	len = 1;
	while (read(filedes, buf, 1))
		len++;
	return (len);
}

char	*get_element(unsigned long n, char **dict_table)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	j = 0;
	k = 0;
	while (ft_atoi(dict_table[j]) != n)
		++j;
	while (dict_table[j][i] != ':')
		i++;
	s = malloc(1000 * sizeof(char));
	i++;
	while (dict_table[j][i] != '\0')
		s[k++] = dict_table[j][i++];
	s[k] = '\0';
	return (s);
}

void	update_line(char **dict_table, char *s, int *i, int *j)
{
	while (dict_table[*i][*j] != ':')
	{
		s[*j] = dict_table[*i][*j];
		++(*j);
	}
}

void	trim_dict(char **dict_table)
{
	int		i;
	int		j;
	int		start ;
	char	*s;

	i = 0;
	while (dict_table[i])
	{
		j = 0;
		s = malloc(1000 * sizeof(char));
		update_line(dict_table, s, &i, &j);
		s[j] = dict_table[i][j];
		start = ++j;
		while (dict_table[i][j] == ' ')
			j++;
		while (dict_table[i][j])
		{
			if (s[start - 1] != ' ' || dict_table[i][j] != ' ')
				s[start++] = dict_table[i][j];
			++j;
		}
		dict_table[i++] = s;
	}
}
