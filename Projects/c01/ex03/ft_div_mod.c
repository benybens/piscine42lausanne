/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:19:48 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/03 20:25:05 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pdiv;
	int *pmod;

	pdiv = &div;
	pmod = &mod;
	a=10;
	b=2;

	ft_div_mod(a,b,pdiv,pmod);

	printf("%d\n",*pdiv);
	printf("%d\n",*pmod);

	a=10;
	b=3;

	ft_div_mod(a,b,pdiv,pmod);

	printf("%d\n",*pdiv);
	printf("%d\n",*pmod);

}*/
