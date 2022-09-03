
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	int i;

	i=0;
	while(i<n)
	{
		if(src[i] == '\0')
		{
			while(i<n)
			{
				dest[i] = '\0'; 
				i++;
			}
		}
		else
		{
			dest[i]=src[i];
			i++;
		}
	}
	dest[i] = '\0'; 
	
	return dest;

}

int main (void)
{
	char source[20] = "Hel";
	char dest[20] = "World" ;
	int n = 5;

	printf("%s\n",dest);
	ft_strncpy(&dest[0],&source[0],n);
	printf("%s\n",dest);
}
