/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:13:16 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/12 15:02:42 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_alpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_exp(int x, int e)
{
	int i;
	int res;
	
	res = 1;
	i = e;
	while (i > 1)
	{
		res *= x;
		i--;
	}
}

int getnu(char c)
{
	return (c - '0');
}


int	ft_atoi(char *str)
 {
 	int	i;
	int	count_num;
	int	res;
	int 	odd;

 	i = 0;
	count_num = 0;
	res = 0;
 	while (!(is_alpha(str[i])))
	{
		if (str[i] == '-')
			odd = !odd;
		i++;
	}
	res = i;
	while(is_alpha(str[i]))
	{
		count_num++;
		i++;
	}
	i = res;
	res = 0;
	while(count_num > 0)
	{
		res += ft_exp(10,count_num)*getnu(str[i]);
		count_num--;
		i++;
	}
	if (!odd)
		res = -res;
	return(res);
 }

int main (void)
{
	char str[] = "---++--";

	printf("%d\n", ft_atoi(str));
}
