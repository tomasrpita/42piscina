int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power < 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
