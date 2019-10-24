#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
 char dest[50] = "Using strncat function,";
 char src[50] = " this part is added and this is ignored";
 int n = 19;

 printf("%s", ft_strncat(dest, src, n  ));

 return(0);
}
