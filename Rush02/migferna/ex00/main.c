/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:26:19 by migferna          #+#    #+#             */
/*   Updated: 2019/10/20 22:07:47 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*open_file(char *filename);
char	*find(char *str, char *to_find);
char	*get_row(char *str);
int		error_no_number(char *str);
int		ft_twodigits(char *buffer, char *arg);
int		ft_threedigits(char *buffer, char *arg);
int		ft_readletters(char *str);

int		main(int argc, char **argv)
{
	int		digits;
	char	*buffer;
	char	*row;

	buffer = NULL;
	if (argc == 2)
	{
		buffer = open_file("numbers.dict");
		digits = ft_strlen(argv[1]);
	}
	if (argc != 2 || error_no_number(argv[1]) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	digits = ft_strlen(argv[1]);
	if (digits == 2 && argv[1][0] != '1')
		ft_twodigits(buffer, argv[1]);
	else
	{
		row = find(buffer, argv[1]);
		row = get_row(row);
		ft_readletters(row);
	}
	free(buffer);
}
