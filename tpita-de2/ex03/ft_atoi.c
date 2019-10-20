/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:44:50 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/20 18:05:04 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_result(char *str, int i)
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

int	ft_atoi(char *str)
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
