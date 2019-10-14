/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:43:36 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/14 18:39:18 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				length;
	unsigned int	i;

	length = -1;
	while (dest[++length])
		i = 0;
	while (i < nb)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
