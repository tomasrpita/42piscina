/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:17:19 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/16 15:37:28 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		pr(char c)
{
	return (c >= ' ' && c <= '~');
}

char	hex(unsigned char u)
{
	if (u < 10)
		return ('0' + u);
	return ('a' + (u - 10));
}

void	print_hex(char c)
{
	unsigned char x;

	x = (unsigned)c;
	ft_putchar('\\');
	ft_putchar(hex(x / 16));
	ft_putchar(hex(x % 16));
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (pr(str[i]))
			ft_putchar(str[i]);
		else
			print_hex(str[i]);
		i++;
	}
}
