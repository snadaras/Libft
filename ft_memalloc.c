/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:30:35 by snadaras          #+#    #+#             */
/*   Updated: 2017/11/21 17:30:41 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*to_return;

	to_return = malloc(size);
	if (to_return == NULL)
		return (NULL);
	ft_bzero(to_return, size);
	return (to_return);
}
