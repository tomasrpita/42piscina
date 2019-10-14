#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
  char src[] = "Listicoespialidoso";
  char dest[] = "Supercalifragi";
  printf("%s", ft_strcat(dest, src));
  return (0);
}
