
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{

	int i;

	i=0;
	while(src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0'; 
	
	return dest;

}

int main (void)
{
	char source[20] = "Hello";
	char dest[20] = "World" ;

	printf("%s\n",dest);
	ft_strcpy(&dest[0],&source[0]);
	printf("%s\n",dest);
}
