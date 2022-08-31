#include <stdio.h>
#include <unistd.h>

void ft_reverse_print_alphabet(void);

int	main()
{
	ft_reverse_print_alphabet();
}


void ft_reverse_print_alphabet(void)
{
	char c;
	c = 'z';
	while(c >= 'a')
	{
		write(1,&c,1);
		c--;
	}
}
