/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:00:07 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/15 15:24:34 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

//int ft_is_signed(char *str)

	


int		ft_atoi(char *str)
{
	int		i;
	int		count;
	int		j;
	int		odd;
	int		result;

	count = 0;
	while (str[count])
		count++;

	int		str2[count + 1];
	i = 0;
	j = 0;
	while ((str[i] != '+' || str[i] != '-') && str[i])
	{	
		if (str[i] != 32 && str[i] != '\f' && str[i] != '\n' &&
		str[i] != '\r' && str[i] != '\t' && str[i] != '\v' &&
		str[i] >= '0' && str[i] <= '9')
		{	str2[j] = str[i];
			ft_putchar(str2[j]);
			j++;
		}
		str2[j] = '\0';
		i++;	
	}	
	
	i = 0;
	count = 0;	
	while (str2[i])
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	odd = count % 2;
	result = *str;
	return (result);	
}

int main()
{
	ft_atoi(" ---+--+1234ab567");
	return (1);
}
