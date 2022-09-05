#include <string.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while ( str[i] != '\0')
	{
		if ( str[i] >= ' ' && str[i]<= 127)
		{
			write(1, &str, 1);
			i++;
		}
		else
		{
			write(1,92, 1);
	
		}
	}
}


int  main (void)
{
	char	src[50];
	char	dest[10];
	int i;
	int size;
	int length;

	size = 10;
	length=0;
	i = 0;
	strcpy(src,"salut test +un+deux+oui ;ca-joue +42 ?ok");
	
	length = ft_strlcpy(&dest[0],&src[0],size);
	
	while (dest[i] != '\0')
	{
		printf("%c",dest[i]);
		i++;
	}
	printf("\n");
	printf("%d",length);
	printf("\n");
}
