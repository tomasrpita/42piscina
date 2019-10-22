int	ft_iterative_factorial(int nb)
{
	int i;
	int fac;

	if (nb < 0 || nb > 16)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb - 1;
	fac = nb;
	while (i > 1)
	{
		fac = i * fac;
		i = i - 1;
	}
	return (fac);
}
