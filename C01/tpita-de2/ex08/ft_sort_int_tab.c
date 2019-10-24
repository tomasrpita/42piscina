/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:21:59 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/10 14:03:12 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		contador;
	int		i;
	int		temporal;

	contador = 0;
	while (contador < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temporal = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temporal;
			}
			i++;
		}
		contador++;
	}
}
