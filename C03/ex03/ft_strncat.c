char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		length;
	unsigned int 	i;
  
	length = -1;
	while (dest[++length]);
  
	i = 0;
	while (i < nb)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
