/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprahin <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:02:54 by aprahin           #+#    #+#             */
/*   Updated: 2022/09/18 23:02:49 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_functions.h"

int	ft_isint(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] < '0' || arg[i] > '9')
		{
			return (0);
		}
		++i;
	}
	if (ft_atoi(arg) > 2147483647)
		return (0);
	return (1);
}

void	whiles(int *i, char *dict)
{
	while (dict[*i] >= '0' && dict[*i] <= '9')
		++(*i);
	while (dict[*i] != ' ' && dict[*i] != ':')
		++(*i);
	while (dict[*i] == ' ')
		++(*i);
	return ;
}

int	ft_isdict(char	*dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		while (dict[i] == '\n' || dict[i] == ' ' || dict[i] == '\t'
			|| dict[i] == '\v' || dict[i] == '\f' || dict[i] == '\r')
			++i;
		if (dict[i] == '+' || dict[i] == '-')
			++i;
		if ((dict[i] < '0' || dict[i] > '9'))
			return (0);
		whiles(&i, dict);
		if (dict[i] != ':')
			return (0);
		while (dict[i] >= ' ' && dict[i] != 127)
			++i;
		if (dict[i] != '\n' && dict[i] != '\0')
			return (0);
		while (dict[i] == '\n')
			++i;
		if (dict[i] == '\0')
			break ;
	}
	return (1);
}

void	ft_print_error(int errorcode)
{
	if (!errorcode)
	{
		ft_putstr("Error\n");
		exit(1);
	}
	else
	{
		ft_putstr("Dict Error\n");
		exit(1);
	}
}
/*#include <stdio.h>
int	main()
{
	char	str[] = "\n\n\n-23asdf   :   : ay\n\n242: 314 ";
	printf("%i\n", ft_isdict(str));
}*/
