#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

int	main()
{
	ft_print_comb2();
}

void ft_putchar(char c)
{
         write(1,&c,1);
}

void ft_print_number(char d0,char d1,char d2,char d3)
{
	ft_putchar(d0);
	ft_putchar(d1);
	ft_putchar(' ');
	ft_putchar(d2);
	ft_putchar(d3);
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_comb2(void)
{
	char d0 = '0';
	char d1 = '0';
	char d2 = '0';
	char d3 = '1';

	while(d1 <= '8')
	{
	
		while(d2 <= '9')
		{
	
			while (d3 <= '9')
			{
				ft_print_number(d0,d1,d2,d3);
				d3++;
			}
			d3 = '0';
			d2++;	
		}
		d3 = d1++ + 1;
		d2 = '0'; 
	}
}
