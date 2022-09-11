/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:04:46 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/06 02:37:29 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	ft_putchar(char c);
void	ft_print_number(char num0, char num1, char num2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(char num0, char num1, char num2)
{
	ft_putchar(num0);
	ft_putchar(num1);
	ft_putchar(num2);
	if (num0 != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	num0;
	char	num1;
	char	num2;

	num0 = '0';
	num1 = '1';
	num2 = '2';
	while (num0 <= '7')
	{
		while (num1 <= '8')
		{
			while (num2 <= '9')
			{
				ft_print_number(num0, num1, num2);
				num2++;
			}
		num2 = num1 + 2;
		num1++;
		}
	num1 = num0 + 1;
	num0++;
	}	
}

/*int	main(void)
{
	ft_print_comb();
}*/
