/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 16:40:29 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/20 17:50:45 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int it;

	it = 0;
	while (str[it])
		ft_putchar(str[it++]);
}

int		ft_strlen(char *str)
{
	int it;

	it = 0;
	while (str[it] != '\0')
		it++;
	return (it);
}

int		ft_rowlen(char *str)
{
	int it;

	it = 0;
	while (str[it] != '\n')
		it++;
	return (it);
}

void	ft_readletters(char *str)
{
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			write(1, str, 1);
		if (*str == ' ' && ('a' <= *(str - 1) && *(str - 1) <= 'z'))
			write(1, str, 1);
		str++;
	}
}
