/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:19:48 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/03 20:25:42 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	pa = &a;
	pb = &b;
	a=10;
	b=2;

	ft_ultimate_div_mod(pa,pb);

	printf("%d\n",*pa);
	printf("%d\n",*pb);

	a=10;
	b=3;

	ft_ultimate_div_mod(pa,pb);

	printf("%d\n",*pa);
	printf("%d\n",*pb);
}*/
