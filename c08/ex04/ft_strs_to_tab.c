/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:09:31 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/21 09:23:03 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock_str;
	int i;
	int j;

	i = 0;
	stock_str = malloc( (ac + 1) * sizeof(stock_str));
	while (i < ac)
	{
		stock_str[i].size = ft_strle(av[i]);
		j = 0;
		while(av[i][j])
			stock_str[i].str[i] = av[i][j];
		stock_str[i].cpy = ft_strdup(av[i]);
		i++;
	}


}
