#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
  char str1[] = "TutorialsPoint";
  char str2[] = "Point";
  char *res;

  res = ft_strstr(str1, str2); 

  printf("The ft_strstr substring is: %s\n", res);  
  putchar('\n');
  
  char haystack[] = "TutorialsPoint";
  char needle[] = "rial";
  char *ret;

  ret = ft_strstr(haystack, needle);

  printf("The substring is: %s\n", ret);

  return 0;
}
