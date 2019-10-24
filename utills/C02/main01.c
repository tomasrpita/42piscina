#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "It's Monday and it's raining";
    char dest[40];

	printf("%s \n", ft_strncpy(dest, src, 10));
	

	printf("%s \n", ft_strncpy(dest, src, 40));
	

}
