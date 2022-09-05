#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (src[i] != '0')
	{
		if(i < size)
		{
			dest[i]=src[i];
		}
		else
		{
			dest[i] = '\0';
			return (i);
		}
		i++;
	}
	dest[i] = '\0';
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
