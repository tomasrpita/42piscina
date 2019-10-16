#include <stdio.h>
#include <unistd.h>

int    ft_numeric(char *str)
{
    int    i;
    
    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            return (1);
        i++;
    }
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int        ft_atoi(char *str)
{
    int        i;
    int        j;
    int        nc;
    char     str2[50];
    int       result;
    
    result = 0;
    nc = 0;
    if (!ft_numeric(str))
        return (0);
    i = 0;
    j = 0;
    while (str[i] && (str[i] != 32 && str[i] != '\f' && str[i] != '\n' &&
                      str[i] != '\r' && str[i] != '\t' && str[i] != '\v'))
    {
        
        while (str[i] == '-' && !(str[i]  <= '0' && str[i] <= '9'))
        {
            nc++;
            i++;
        }
        nc = nc % 2 ? -1 : 1;
        while (str[i] >= '0' && str[i] <= '9')
        {
            str2[j] = str[i];
            i++;
            j++;
        }
        if (j != 0)
            while (j > 0)
            {
                
                return ((int)&str2 * nc);
                
            j:write++;
            }
        return (0);
    }
    
    int main()
    {
        int x;
        
        // x = ft_atoi(" ---+--+1234ab567");
        x = ft_atoi("567");
        
        //x = ft_atoi(" ---+--+");
        printf("%d", x);
        return (1);
    }
