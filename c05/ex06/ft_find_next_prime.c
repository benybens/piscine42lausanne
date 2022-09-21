/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:45:26 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/18 10:09:50 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	while(i < nb)
	{
		if (nb % i == 0)
		{
			printf("%d\n",i);
			return (0);
		}
		i++;
	}
	return (1);

}
int ft_find_next_prime(int nb)
{
	if(ft_is_prime(nb))
		return(nb);
	else
		return(ft_find_next_prime(nb+1));

}

int main(int argc, char *argv[])
{
	int nbr;
	(void)argc;
	nbr = atoi(argv[1]);

	printf("nbr:%d\nnext :%d",nbr,ft_find_next_prime(nbr));
}
