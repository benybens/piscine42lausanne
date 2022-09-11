/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:27:48 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/09 15:27:03 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putnbr(int nb)
{
	int res;
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	res = (nb % 10) + '0';
	write(1, &res,1);
	
}

int	main(void)
{	
	int	a;

	a = 123;
	ft_putnbr(a);
}
