/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:41:53 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/10/20 19:09:50 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *c);
int		ft_rowlen(char *c);

#define BUF_SIZE 4096

char	*open_file(char *filename)
{
	int		fp;
	int		ret;
	int		it;
	char	*buffer;

	if ((buffer = malloc(BUF_SIZE)) == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		ft_putstr("Dict Error\n");
	}
	else
	{
		while ((ret = read(fp, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
		}
		it = 0;
	}
	return (buffer);
}

char	*find(char *buffer, char *arg)
{
	int i;
	int j;

	i = 0;
	i = 0;
	while (buffer[i] != '\0')
	{
		j = 0;
		while ((buffer[i + j] == arg[j]) && buffer[i + j] != '\0')
		{
			if (arg[j + 1] == '\0')
				return (&buffer[i]);
			j++;
		}
		i++;
	}
	return (0);
}

char	*get_row(char *str)
{
	int		it;
	char	*row;

	if ((row = malloc(ft_rowlen(str) + 1)) == NULL)
		return (0);
	it = 0;
	while (str[it] != '\n')
	{
		row[it] = str[it];
		it++;
	}
	row[it] = '\0';
	return (row);
}
