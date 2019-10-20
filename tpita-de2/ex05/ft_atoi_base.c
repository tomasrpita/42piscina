/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:55:12 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/20 20:23:31 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_insidebase(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_checkbase(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[i] == '\0')
		return (0);
	else
	{
		while (base[i])
		{
			if (base[i] == '-' || base[i] == '+')
				return (0);
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				++j;
			}
			++i;
		}
	}
	if (i <= 1)
		return (0);
	return (i);
}

int		ft_checkerror(char *str, char *base, int *k, int *nc)
{
	int		i;
	int		j;
	int		ncf;

	ncf = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n' ||
	str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		ncf++;
		i++;
	}
	*nc = ncf != 0 ? ncf : 2;
	j = 0;
	*k = i;
	while (base[j])
	{
		if (str[i] == base[j])
			return (1);
		j++;
	}
	return (0);
}

int		ft_getnb(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		res;
	int		nc;
	int		base_size;

	i = 0;
	nc = 2;
	if (!(base_size = ft_checkbase(base))
	|| !ft_checkerror(str, base, &i, &nc))
		return (0);
	res = 0;
	nc = nc % 2 ? -1 : 1;
	while (str[i] && ft_insidebase(str[i], base))
	{
		res = (res * base_size) + (ft_getnb(str[i], base));
		i++;
	}
	return (res * nc);
}
