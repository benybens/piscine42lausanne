/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensegh <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:52:55 by ybensegh          #+#    #+#             */
/*   Updated: 2022/09/07 09:32:28 by ybensegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//------Uncomment the desired RUSH project  to change Rush Subject------/
//#define RUSH00 
//#define RUSH01 
#define RUSH02 
//#define RUSH03 
//#define RUSH04 
//-------------------------------------------------------------------/

#ifdef RUSH00
# define CORNERTL	'o'
# define CORNERTR	'o'
# define CORNERBL	'o'
# define CORNERBR	'o'
# define HORIZONTAL	'-'
# define VERTICAL	'|'
#endif

#ifdef RUSH01

//------ RUSH 01 ------
# define CORNERTL	'/'
# define CORNERTR	92
# define CORNERBL	92
# define CORNERBR	'/'
# define HORIZONTAL	'*'
# define VERTICAL	'*'

#endif

#ifdef RUSH02

//----- RUSH 02 ------
# define CORNERTL	'A'
# define CORNERTR	'A'
# define CORNERBL	'C'
# define CORNERBR	'C'
# define HORIZONTAL	'B'
# define VERTICAL	'B'

#endif

#ifdef RUSH03

//------ RUSH 03 ------
# define CORNERTL	'A'
# define CORNERTR	'C'
# define CORNERBL	'A'
# define CORNERBR	'C'
# define HORIZONTAL	'B'
# define VERTICAL	'B'

#endif

#ifdef RUSH04

//------- RUSH 04 ------
# define CORNERTL	'A'
# define CORNERTR	'C'
# define CORNERBL	'C'
# define CORNERBR	'A'
# define HORIZONTAL	'B'
# define VERTICAL	'B'

#endif

void	ft_putchar(char c);

void	ft_print_border_top(int x)
{
	int	counth;

	counth = 1;
	while (counth <= x)
	{
		if (counth == 1 || counth == x)
		{
			if (counth == 1)
			{
				ft_putchar(CORNERTL);
			}
			else
			{
				ft_putchar(CORNERTR);
			}
		}
		else
		{
			ft_putchar(HORIZONTAL);
		}
		counth++;
	}
}

void	ft_print_border_bottom(int x)
{
	int	counth;

	counth = 1;
	while (counth <= x)
	{
		if (counth == 1 || counth == x)
		{
			if (counth == 1)
			{
				ft_putchar(CORNERBL);
			}
			else
			{
				ft_putchar(CORNERBR);
			}
		}
		else
		{
			ft_putchar(HORIZONTAL);
		}
		counth++;
	}
}

void	ft_print_body(int x)
{
	int	counth;

	counth = 1;
	while (counth <= x)
	{
		if (counth == 1 || counth == x)
		{
			ft_putchar(VERTICAL);
		}
		else
		{
			ft_putchar(' ');
		}
		counth++;
	}
}

void	ft_print_lines(int x, int y)
{
	int		county;

	county = 1;
	while (county <= y)
	{
		if (county == 1 || county == y)
		{
			if (county == 1)
			{
				ft_print_border_top(x);
			}
			else
			{
				ft_print_border_bottom(x);
			}
		}
		else
		{
			ft_print_body(x);
		}
		ft_putchar('\n');
		county++;
	}
}

void	rush(int x, int y)
{
	int		i;
	char	str[50];

	str[0] = 'N';
	str[1] = 'O';
	str[2] = 'K';
	str[5] = '!';
	i = 0;
	if (x != 0 && y != 0)
	{
		if (x < 0)
			x = -x;
		if (y < 0)
			y = -y;
		ft_print_lines(x, y);
	}
	else
	{	
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
	}
}
