#include<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr=42;
}

int	main(void)
{
	int *pa1;
	int **pa2;
	int ***pa3;
	int ****pa4;
	int *****pa5;
	int ******pa6;
	int *******pa7;
	int ********pa8;
	int *********pa9;

	int a=2;
	
	printf("%d<\n",a);
	pa1=&a;
	pa2=&pa1;
	pa3=&pa2;
	pa4=&pa3;
	pa5=&pa4;
	pa6=&pa5;
	pa7=&pa6;
	pa8=&pa7;
	pa9=&pa8;

	ft_ultimate_ft(pa9);

	printf("%d",*********pa9);
}
