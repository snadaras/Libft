/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:24:25 by snadaras          #+#    #+#             */
/*   Updated: 2017/12/04 17:55:43 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *to_return;

	to_return = (t_list*)malloc(sizeof(t_list));
	if (to_return == NULL)
		return (NULL);
	if (content == NULL)
	{
		to_return->content_size = 0;
		to_return->content = NULL;
	}
	else
	{
		to_return->content_size = content_size;
		to_return->content = malloc(content_size);
		ft_memcpy(to_return->content, content, content_size);
	}
	to_return->next = NULL;
	return (to_return);
}
