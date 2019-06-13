/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 15:15:02 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 14:50:38 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list)
	{
		if (!content)
		{
			list->content = NULL;
			list->content_size = content_size;
		}
		else
		{
			list->content = malloc(content_size);
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
		}
		list->next = NULL;
	}
	return (list);
}
