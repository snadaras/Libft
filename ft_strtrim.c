/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:08:32 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/03 20:03:19 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_space_blank(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

static const char	*seek_end(const char *str)
{
	if (str)
	{
		str = str + ft_strlen(str);
		while (is_space_blank(*(str - 1)))
			str--;
	}
	return (str);
}

char				*ft_strtrim(char const *s)
{
	char		*to_return;
	const char	*begin;
	const char	*end;

	if (!s)
		return (NULL);
	begin = s;
	while (is_space_blank(*begin))
	{
		++begin;
	}
	end = seek_end(s);
	if (begin >= end)
		return (ft_strdup(""));
	if (!(to_return = (char*)malloc(sizeof(char) * (size_t)(end - begin + 1))))
		return (NULL);
	to_return = ft_strsub(begin, 0, (size_t)(end - begin));
	if (!to_return)
	{
		to_return = (char*)malloc(1);
		to_return[0] = '\0';
	}
	return (to_return);
}
