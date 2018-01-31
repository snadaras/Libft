/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:24:16 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/03 19:52:24 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (i < n)
	{
		if (*ptr1 != *ptr2)
			return (*(unsigned char *)ptr1 - *(unsigned char *)ptr2);
		i++;
		ptr1++;
		ptr2++;
	}
	return (0);
}
