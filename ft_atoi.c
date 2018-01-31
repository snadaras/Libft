/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/03 14:53:48 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	int			i;
	long int	number;
	int			neg;

	i = 0;
	number = 0;
	neg = 1;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'
	|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == 45)
		neg = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (neg == -1 && number > 2147483648)
			return (0);
		if (neg == 1 && number > 2147483647)
			return (-1);
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (neg * number);
}
