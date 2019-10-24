/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:52:15 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/08 17:16:22 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		tab2[size];
	int		i;

	i = 0;
	size--;
	while (size >= 0)
	{
		tab2[size] = tab[i];
		size--;
		i++;
	}
	i--;
	while (i >= 0)
	{
		tab[i] = tab2[i];
		i--;
	}
}