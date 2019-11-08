/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_threedigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:56:33 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/20 21:05:01 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find(char *buffer, char *arg);
char	*get_row(char *str);
void	ft_readletters(char *str);

void	ft_threedigits(char *buffer, char *arg)
{
	char	digit[2];
	char	*row;

	digit[0] = arg[0];
	digit[1] = '\0';
	row = find(buffer, digit);
	row = get_row(row);
	if (!(row[0] == '0'))
		ft_readletters(row);
	row = find(buffer, "100");
	row = get_row(row);
	ft_readletters(row);
}
