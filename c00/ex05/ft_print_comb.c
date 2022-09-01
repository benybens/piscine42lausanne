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

void ft_print_number(char d0,char d1,char d2)
{
	ft_putchar(d0);
	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb(void)
{
	char d0 = '0';
	char d1 = '1';
	char d2 = '2';
	
	while(d0 <= '7')
	{
		while(d1 <= '8')
		{
			while(d2 <= '9')
			{
				ft_print_number(d0,d1,d2);
				d2++;
			}
		d2 = d1 + 2;
		d1++;
		}
	d1 = d0 + 1;
	d0++;
	}	
}
