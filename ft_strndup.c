/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:00:30 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/06 20:30:14 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char*)malloc(sizeof(*new_str) * (n + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < n)
	{
		new_str[i] = src[i];
		++i;
	}
	new_str[n] = '\0';
	return (new_str);
}
