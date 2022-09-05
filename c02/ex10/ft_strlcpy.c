#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	while (src[i] != 0) 

	if ( str[-1] < 'a' ||  str[-1] > 'z')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			maj = str[0]-32;		
		}
		else
		{
			maj = str[0];
		}
	}
	else
	{
		maj = str[0];
	}
	return (maj);
}


int  main (void)
{
	char	str[50] ;
	int i;

	i = 0;
	strcpy(str,"salut test +un+deux+oui ;ca-joue +42 ?ok");
	while (str[i] != '\0')
	{
		printf("%c",ft_strcapitalize(&str[i]));
		i++;
	}
}
