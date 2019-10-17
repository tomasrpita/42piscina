#include <stdio.h>

int        ft_atoi(char *str);

int main()
{
    int x;
    
    x = ft_atoi(" ---+--+1234ab567");
    
    printf("%d", x);
    return (1);
}
