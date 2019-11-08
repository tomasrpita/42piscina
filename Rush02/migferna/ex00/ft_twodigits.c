/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_twodigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:43:09 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/20 19:47:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_putchar(char c);
char	*find(char *buffer, char *arg);
void	ft_readletters(char *str);
char	*get_row(char *str);

void	ft_twodigits(char *buffer, char arg[])
{
	char	*portion;
	char	first_digit[2];
	char	*row;
	char	second_digit[2];

	portion = find(buffer, "20");
	first_digit[0] = arg[0];
	first_digit[1] = '\0';
	row = find(portion, first_digit);
	row = get_row(row);
	ft_readletters(row);
	ft_putchar(' ');
	second_digit[0] = arg[1];
	second_digit[1] = '\0';
	row = find(buffer, second_digit);
	row = get_row(row);
	if (!(row[0] == '0'))
		ft_readletters(row);
}
