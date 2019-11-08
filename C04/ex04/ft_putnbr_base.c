/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:44:57 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/17 19:48:30 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_checkbase(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[i] == '\0')
		return (0);
	else
	{
		while (base[i])
		{
			if (base[i] == '-' || base[i] == '+')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				++j;
			}
			++i;
		}
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_turnbase(int nbr, char *base, unsigned int base_size)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= base_size)
		ft_turnbase(nb / base_size, base, base_size);
	ft_putchar(base[nb % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_size;

	base_size = 42;
	base_size = ft_checkbase(base);
	if (!base_size)
		return ;
	ft_turnbase(nbr, base, base_size);
}
