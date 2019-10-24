#include <unistd.h>

void    ft_putchar(char c);
void    imprime(int *rango, int n);

void    ft_print_combn(int n)
{
    int     i;
    int     rango[10];
    
    
    // si se sale de 9, sale del programa
    if (n > 10 || n < 0)
        return;
    
    i = -1;
    // Avanza los rangos?
    while (i++ < n)
        rango[i] = i;
    
    
    while (rango[0] <= (10 - n) && n >= 1)
    {
        imprime(rango, n);
        
        // para que es este if, donde cambia n, a menos que venga ya en 10?
        if (n == 10)
            break;
        
        rango[n - 1]++;
        i = n;
        
        // Analiza este
        while (i && n > 1)
        {
            i--;
            if (range[i] > 9)
            {
                range[i - 1]++;
                range[i] = 0;
            }
        }
    }
}

void    imprime(int *rango, int n)
{
    int i;
    int muestra;
    
    muestra = 1;
    i = 0;
    while (++i < n)
        if (rango[i - 1] >= rango[i])
            muestra = 0;
    
    if (!muestra)
        return;
    
    i = -1;
    
    while (++i < n)
        ft_putchar(range[i] + '0');
    
    // si es la ultima serie
    if (rango[0] < (10 - n))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    
}

int main()
{
    ft_print_combn(2);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
