#include <stdio.h>

int main()
{
  char str1[20] = "TutorialsPoint";
  char str2[10] = "";
  char *res;

  res = ft_strstr(str1, str2); 

  printf("The ft_strstr substring is: %s\n", res);  
  ft_putchar('\n');
  
  const char haystack[20] = "TutorialsPoint";
  const char needle[10] = "";
  char *ret;

  ret = strstr(haystack, needle);

  printf("The substring is: %s\n", ret);

  return 0;
}
