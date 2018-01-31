/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:19:14 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/06 20:54:15 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int square;
	int i;

	square = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	else
		while (square < nb)
		{
			square = square + (2 * i + 1);
			i++;
		}
	if ((square == nb) && (square % nb == 0))
		return (i);
	else
		return (0);
}
