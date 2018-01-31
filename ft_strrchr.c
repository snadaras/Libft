/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:00:05 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/29 16:39:23 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_c;

	last_c = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_c = (char *)s;
		s++;
	}
	if (last_c)
		return (last_c);
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
