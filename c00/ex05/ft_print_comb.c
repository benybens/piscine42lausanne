#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char c);

int	main()
{
	ft_print_comb();
}

void ft_putchar(char c)
{
         write(1,&c,1);
}

void ft_print_number(int d0,int d1,int d2)
{
	ft_putchar(d0);
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void)
{
	int d0;
	int d1;
	int d2;

	
}
