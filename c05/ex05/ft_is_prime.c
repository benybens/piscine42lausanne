/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 09:41:40 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/17 09:48:00 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
	if(nb % 2 == 0)
		return (0);
	return (1);

}

int main(int argc , char *argv[])
{
	(void) argc;

	int nb;

	nb = atoi(argv[1]);

	printf("%d\n",ft_is_prime(nb));
}
