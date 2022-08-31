#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

int	main()
{
	char input;
	scanf("%c", &input);
	ft_putchar(input);   	

}



void ft_putchar(char c)
{
	write(1,&c,1);
}
