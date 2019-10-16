/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:29:47 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/14 17:26:04 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	while (s1 && s2 && n != 0 && i < n)
	{
		if (s1[i] != s2[i])
		{	
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}	
		i++;
	}
	if (s1_c[i] != s2_c[i] && i != n)
	{	
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		return (result);
	}	
	return (0);
}
