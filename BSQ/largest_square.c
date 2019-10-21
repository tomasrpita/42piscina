int min(int a, int b, int c)
{
    if (a <=  b && a <= c)
        return (a);
    else if (b <=  a && b <=  c)
        return (b);
    return (c);
    
}


int ft_largest_square(int matrix[4][5])
{
    int result = 0;
    int i;
    int j;
    int cache[4][5];
    
    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 5)
        {
            cache[i][j] = matrix[i][j];
            j++;
        }
        i++;
    }
    
    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 5)
        {
            if (!(i ==  0 || j == 0))
            {
                if (matrix[i][j] > 0)
                    cache[i][j] = 1 + min(cache[i][j -  1], cache[i -1][j], cache[i -1][j -1]);
                else if (matrix[i][j] > result)
                    result = cache[i][j];
            }
            j++;
        }
        i++;
    }
    
    return (result);
}


int main()
{
    int result;
    
    int matrix[4][5] = {{1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1}};
    
    result = ft_largest_square(matrix);
    
    return (result);
    
}
