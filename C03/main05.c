#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
 char str[] = "sdfsd";
 char to_find[] = "asdf";
 unsigned int n =  2;
 
 printf("%s", ft_strlcat(str, to_find, n ));
 
 return(0);
}
