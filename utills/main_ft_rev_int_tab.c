#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main ()
{
 	int tab[6];
   	int size;	
    
    tab[0] = 6;
    tab[1] = 5;
    tab[2] = 4;
    tab[3] = 4;
    tab[4] = 2;
    tab[5] = 6;
    size = 6;

    ft_sort_int_tab(tab, size);
    
    
}
