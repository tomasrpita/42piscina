/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solving_boxes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:36:11 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/12 22:04:56 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4
#define I 16


void  ft_putchar(char c)
{
	write(1, &c, 1);
}	


void ft_printgrid(int grid[4][4])
{
	
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			ft_putchar('0' + grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;	
	}

}

int ft_used_in_row(int grid[N][N], int row, int num) 
{
	int		col;
	
	col = 0;
	//ft_putchar('7');
	while (col < N)
	{
		if (grid[row][col] == num)
			return (1);
		col++;
	}
	return 	(0);
}

int ft_used_in_col(int grid[N][N], int col, int num) 
{
	int		row;
	
	
	row = 0;
	while (row < N)
	{
		if (grid[row][col] == num)
			return (1);
		row++;
	}
	return 	(0);
}

int ft_is_safe(int grid[N][N], int row, int col, int num)
{
	
	if (!ft_used_in_col(grid, col, num) && !ft_used_in_row(grid, row, num))
		return (1);
	return (0);			
}	

int		ft_writebox(int grid[N][N], int row, int col, int n)
{
	grid[row][col] = n;
	//ft_printgrid(grid);
	return (1);
}

int  ft_fillgrid(int grid[N][N], int  input[I])
{
	// int 	position;
	int		i;

	i = 0;

	// revisa que las adyacencias de las esquinas sean iguales	
	// 
	if (input[0] == 1 && input[8] == 1)
		ft_writebox(grid, 0, 0, 4);
	
	if (input[4] == 1 && input[11] == 1)
	{	
		if (ft_is_safe(grid, 3, 0, 4))
			ft_writebox(grid, 3, 0, 4);
		else
		{		
			write(1, &"Error\n", 6);
			
			return (0);	
		}
	}
	if (input[3] == 1 && input[12] == 1)
	{	
		if (ft_is_safe(grid, 0, 3, 4))
			ft_writebox(grid, 0, 3, 4);
		else
		{		
			write(1, &"Error\n", 2);
			return (0);	
		}
	}
		
	
	if (input[7] == 1 && input[15] == 1)
	{	
		if (ft_is_safe(grid, 3, 3, 4))
			ft_writebox(grid, 3, 3, 4);
		else
		{		
			write(1, &"Error\n", 2);
			return (0);	
		}
	}	
	return (1);
}

	

int main()
{
	int grid[4][4];
	int i;
	int j;
	int input[16] = { 1, 3, 2, 1, 1, 2, 2, 2, 1, 3, 2, 1, 1, 2, 2, 2};
	// cup = { 4, 3, 2, 1};
	// int input[16] = { 4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};

	



	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			grid[i][j] = 0;
			j++;
		}
		j = 0;
		i++;

	}
	


	//ft_putchar('0' + cup[0]);
	// ft_printgrid(grid);
	// ft_putchar('0' + ft_is_safe(grid, 0, 0, 1));
	ft_fillgrid(grid, input);

	ft_printgrid(grid);
	

}
