#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int main()
{
 char str[] = "Netasdfsd";
 char to_find[] = "Camiones";
 int n = 5;

 printf("%s", ft_strncat(str, to_find, n ));

 return(0);
}
