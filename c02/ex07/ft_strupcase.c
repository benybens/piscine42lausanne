#include <string.h>
#include <stdio.h>

int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while ( str[i] != '\0')
	{
		if ( str[i] >= 'a' && str[i]<= 'b')
		{
			str[i]=str[i]+32;		
		}
		else
		{
			return (0);
		}
	}
	return (1);
}


int  main (void)
{
	char	str[10] ;
	char 	str2[10];
	char 	str3[10];
	char 	str4[10];
	
	strcpy(str,"AGFT");
	strcpy(str2,"gfgFg\ngf");
	strcpy(str3,"sdsd");
	strcpy(str4,".87%");

	printf("%d\n",ft_strupcase(&str[0]));
	printf("%d\n",ft_strupcase(&str2[0]));
	printf("%d\n",ft_strupcase(&str3[0]));
	printf("%d\n",ft_strupcase(&str4[0]));
	
}
