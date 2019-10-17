#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);



int main()
{
    int result;

    // comparing strings str1 and str2
    result = ft_strncmp("./96swhhagvloi6obe9ybkk52g", "./96swhhagvloi6obe9ybkk52g", 10);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = ft_strncmp("asde", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdg", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdf", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asde", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    return 0;
}