/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpita-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:27:07 by tpita-de          #+#    #+#             */
/*   Updated: 2019/10/07 21:31:39 by tpita-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main ()
{
	char	*str;	

	char cadena[]  = "Hola";
	str = cadena;
	
	printf("el numero de caracteres es %d", ft_strlen(str));	


}
