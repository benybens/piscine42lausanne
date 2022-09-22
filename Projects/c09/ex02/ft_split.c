/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:44:48 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/22 22:26:40 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	save_word(char *split_str, char *str, int start_cursor, int end_cursor)
{
	int	i;

	i = 0;
	while (i < end_cursor - start_cursor)
	{
		split_str[i] = str[i + start_cursor];
		i++;
	}
	split_str[i] = 0;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		while (charset[j])
		{
			if (charset[j] == str[i])
			{
				if (count == 0)
					count = 2;
				else
					count++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**split_table;
	int		start_cursor;
	int		end_cursor;
	int		str_cursor;
	int		sizestr;
	int		skip;

	str_cursor = 0;
	charset_cursor = 0;
	i = 0;
	sizestr = ft_strlen(str);
	skip = count_word(str, charset);
	split_table = malloc (skip * sizeof(char *));
	skip = 0 ;
	while (i < line_split)
		split_table[i++] = malloc (1000);
	i = 0;
	start_cursor = 0;
	end_cursor = 0;
	while (str_cursor < sizestr + 1)
	{
		while (charset[i])
		{
			if (charset[i] == str[str_cursor]
				|| str_cursor == sizestr)
			{
				while (charset[i++] == str[str_cursor])
					skip++;
				if (!end_cursor)
					end_cursor = str_cursor;
			}
			i++;
		}
		i = 0;
		if (end_cursor)
		{
			save_word(split_table[i++], str, start_cursor, end_cursor);
			start_cursor = end_cursor + skip;
			skip = 0;
			end_cursor = 0;
		}
		str_cursor++;
	}
	return (split_table);
}
/*
int main(void)
{
	char **split_table;
	char str[1000] = "This is the first step, of long message.,
  	Hello I am Obiwan-Kenobi"; 
	char charset[10] = ",";

	split_table = ft_split(str,charset);

}*/
