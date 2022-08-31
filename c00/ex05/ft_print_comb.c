#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

int	main()
{
	int n;
	scanf("%d",&n);
	ft_is_negative(n);
}


void ft_is_negative(int n)
{
	char c;

	if(n < 0)
	{
		c = 'N';
	}
	else
	{
		c = 'P';
	}
	write(1,&c,1);
}
