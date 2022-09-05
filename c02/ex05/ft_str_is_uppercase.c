#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while ( str[i] != '\0')
	{
		if ( str[i] >= 'A' && str[i]<= 'Z')
		{
			i++;		
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
	strcpy(str2,"gfgFggf");
	strcpy(str3,"sdsd");
	strcpy(str4,".87%");

	printf("%d\n",ft_str_is_uppercase(&str[0]));
	printf("%d\n",ft_str_is_uppercase(&str2[0]));
	printf("%d\n",ft_str_is_uppercase(&str3[0]));
	printf("%d\n",ft_str_is_uppercase(&str4[0]));
	
}
