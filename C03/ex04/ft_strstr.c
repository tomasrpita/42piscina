char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	if (to_find[0] == 0)
		return ((char *)str1);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j] && to_find[j])
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
