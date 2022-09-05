#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ( str[i] != '\0')
	{
		if ( str[i] >= 'a' && str[i]<= 'z')
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
	
	strcpy(str,"argh");
	strcpy(str2,"gfgFggf");
	strcpy(str3,"FFF");
	strcpy(str4,".87%");

	printf("%d\n",ft_str_is_alpha(&str[0]));
	printf("%d\n",ft_str_is_alpha(&str2[0]));
	printf("%d\n",ft_str_is_alpha(&str3[0]));
	printf("%d\n",ft_str_is_alpha(&str4[0]));
	
}
