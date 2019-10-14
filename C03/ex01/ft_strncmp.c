int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1 && s2 && n != 0 && i < n - 1)
	{	if (s1[i] != s2[i])
			return ((unsigned char)(s1 - s2));
	
		i++;
	}
	return (0);
}
