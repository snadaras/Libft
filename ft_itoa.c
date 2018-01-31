/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:54:07 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/27 19:28:04 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

static int		i_len(int n)
{
	long int i;

	i = 0;
	if (n < 0)
		++i;
	while (n /= 10)
		++i;
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = n < 0 ? 1 : 0;
	len = i_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > sign)
	{
		str[--len] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
