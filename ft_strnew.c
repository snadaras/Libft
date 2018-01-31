/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:37:58 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/27 14:06:16 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*to_return;

	to_return = (char*)malloc((size + 1) * sizeof(char));
	if (to_return == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		to_return[i] = 0;
		++i;
	}
	to_return[size] = '\0';
	return (to_return);
}
