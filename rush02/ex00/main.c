/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:37:32 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/18 23:02:46 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	check_error(int argc, char *argv[], char **pathname)
{
	*pathname = malloc(200 * sizeof(char));
	*pathname = "./numbers.dict";
	if (argc > 1)
	{
		if (argc == 3)
		{
			*pathname = argv[1];
			if (!ft_isint(argv[2]))
			{
				ft_print_error(0);
				return (1);
			}
		}
		if (argc == 2)
		{
			if (!ft_isint(argv[1]))
			{
				ft_print_error(0);
				return (1);
			}
		}
	}
	return (0);
}

char	**format_table(char *buf_char)
{
	char	**dict_table;

	dict_table = ft_split(buf_char, "\n");
	ft_sortclean(dict_table);
	trim_dict(dict_table);
	return (dict_table);
}

void	print_number_letter(int argc, char **dict_table, char **argv)
{
	if (argc != 3 && argc != 2)
		ft_print_error(0);
	else
	{
		if (argc == 3)
		{
			if (ft_atoi(argv[2]) == 0)
				ft_putstr(get_element(0, dict_table));
			ft_putstr(ft_putnbr(dict_table, ft_atoi(argv[2])));
		}
		if (argc == 2)
		{
			if (ft_atoi(argv[1]) == 0)
				ft_putstr(get_element(0, dict_table));
			ft_putstr(ft_putnbr(dict_table, ft_atoi(argv[1])));
		}
		ft_putstr("\n");
	}
}

int	main(int argc, char *argv[])
{
	int				dictdes;
	char			*buf_char;
	char			*pathname;
	int				len;
	char			**dict_table;

	if (check_error(argc, argv, &pathname))
		return (1);
	dictdes = open(pathname, O_RDONLY);
	if (dictdes == -1)
		ft_print_error(1);
	buf_char = malloc(sizeof(buf_char));
	len = get_file_len(dictdes, buf_char);
	buf_char = malloc(len);
	close(dictdes);
	dictdes = open(pathname, O_RDONLY);
	read(dictdes, buf_char, len);
	if (!ft_isdict(buf_char))
		ft_print_error(1);
	dict_table = format_table(buf_char);
	print_number_letter(argc, dict_table, argv);
	return (0);
}
