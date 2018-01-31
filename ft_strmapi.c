/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:01:32 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/03 15:58:53 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;
	char	*to_return;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	length = ft_strlen(s);
	if (!(to_return = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		to_return[i] = f(i, s[i]);
		++i;
	}
	to_return[i] = '\0';
	return (to_return);
}
