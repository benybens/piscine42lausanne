/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:12:52 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/03 20:22:01 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 2;
	b = 5; 
	pa = &a;
	pb = &b;

	ft_swap(pa,pb);

	printf("%d",*pa);	
	printf("%d",*pb);	
}*/
