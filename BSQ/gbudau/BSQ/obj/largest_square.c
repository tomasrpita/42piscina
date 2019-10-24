/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largest_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 21:10:05 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/23 22:20:29 by gbudau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsqfunct.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		ft_result(char *str, int i)
{
	int result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nc;
	int	result;

	result = 0;
	nc = 2;
	i = 0;
	j = 0;
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		nc = 0;
		while (str[i] == '-' || str[i] == '+')
		{
			nc++;
			i++;
		}
	}
	nc = nc % 2 ? -1 : 1;
	result = ft_result(str, i);
	return (result * nc);
}

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

int		min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	return (c);
}

void	ft_putnbr(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int		ft_find_xy(int x, int **cache, int row, int col, int *a, int *b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (cache[i][j] == x)
			{
				*a = i;
				*b = j;
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_showme(int **cache, int a, int b, int x, int row, int col, char clues[3])
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if ((i >= a - (x - 1) && i <= a) && (j >= b - (x - 1) && j <= b))
				ft_putchar(clues[2]);
			else if (cache[i][j] == 0)
				ft_putchar(clues[1]);
			else
				ft_putchar(clues[0]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
void	ft_find_box(int **cache, int row, int col, char clues[3])
{
	int i;
	int j;
	int x;
	int *a;
	int *b;

	i = 0;
	x = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (cache[i][j] > x)
				++x;
			j++;
		}
		i++;
	}
	a = &i;
	b = &j;
	ft_find_xy(x, cache, row, col, a, b);
	ft_showme(cache, *a, *b, x, row, col, clues);
}

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
		write(2, "map error\n", 10);
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

int		ft_largest_square(int **matrix, int **cache, int row, int col)
{
	int result;
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			cache[i][j] = matrix[i][j];
			j++;
		}
		i++;
	}
	result = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (!(i == 0 || j == 0))
			{
				if (matrix[i][j] > 0)
					cache[i][j] = 1 + min(cache[i][j - 1], cache[i - 1][j], cache[i - 1][j - 1]);
				else if (matrix[i][j] > result)
					result = cache[i][j];
			}
			j++;
		}
		i++;
	}
	return (result);
}

void	ft_trasform(char **cmatrix, int **matrix, int row, int col, char c)
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			if (cmatrix[i][j] == c)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_tomatrix(char *str, char **cmatrix, int row)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	i++;
	j = 0;
	while (j < row)
	{
		k = 0;
		while (str[i] != '\n')
		{
			cmatrix[j][k] = str[i];
			k++;
			i++;
		}
		i++;
		j++;
	}
}

void	ft_print_cmatrix(char **cmatrix, int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putchar(cmatrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_matrix(int **matrix, int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			ft_putchar(matrix[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		get_mapwidth(char *buffer)
{
	int i;
	int count;

	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	i++;
	count = 0;
	while (buffer[i] != '\n')
	{
		count++;
		i++;
	}
	return (count);
}

int		pro_fl(char *buffer, char *clues)
{
	int		row;
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	clues[0] = buffer[i - 3];
	clues[1] = buffer[i - 2];
	clues[2] = buffer[i - 1];
	if (clues[0] == clues[1])
		return (0);
	if (clues[1] == clues[2])
		return (0);
	if (clues[0] == clues[2])
		return (0);
	line = malloc((i - 3) * sizeof(char));
	j = 0;
	while (j < (i - 3))
	{
		line[j] = buffer[j];
		j++;
	}
	row = ft_atoi(line);
	return (row);
}

int		main(int argc, char **argv)
{
	int		result;
	char	*buffer;
	char	**cmatrix;
	int		**matrix;
	int		i;
	int		col;
	int		row;
	char	clues[3];
	int		**cache;

	argc = 0;
	buffer = NULL;
	i = 0;
	buffer = open_file(argv[1]);
	col = get_mapwidth(buffer);
	if (!(row = pro_fl(buffer, clues)))
	{
		write(2, "map error\n", 10);
		return (0);
	}
	i = 0;
	cache = malloc(row * sizeof(int *));
	while (i < row)
	{
		cache[i] = malloc(col * sizeof(int ));
		i++;
	}
	i = 0;
	cmatrix = malloc(row * sizeof(char *));
	while (i < row)
	{
		cmatrix[i] = malloc(col * sizeof(char));
		i++;
	}
	i = 0;
	matrix = malloc(row * sizeof(int *));
	while (i < row)
	{
		matrix[i] = malloc(col * sizeof(int ));
		i++;
	}
	ft_tomatrix(buffer, cmatrix, row);
	ft_trasform(cmatrix, matrix, row, col, clues[0]);
	result = ft_largest_square(matrix, cache, row, col);
	ft_find_box(cache, row, col, clues);
	return (result);
}
