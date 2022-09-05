#include <string.h>
#include <stdio.h>

char	ft_strupcase(char *str)
{
	char maj;

	if ( str[0] >= 'A' && str[0]<= 'Z')
	{
		maj=str[0]+32;		
	}
	return (maj);
}


int  main (void)
{
	char	str[10] ;
	char 	str2[10];
	char 	str3[10];
	char 	str4[10];
	int i;

	i = 0;
	strcpy(str,"ABCDEF");
	while (str[i] != '\0')
	{
		printf("%c",ft_strupcase(&str[i]));
		i++;
	}
}
