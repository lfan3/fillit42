/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:21:23 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstreverse(t_list **lst)
{
	t_list	*end_list;
	t_list	*last_end_list;
	t_list	*last_begin_list;
	int		index;

	end_list = ft_lstlast(*lst);
	index = ft_lstsize(*lst);
	while (--index > 0)
	{
		last_begin_list = ft_lstat(*lst, index);
		last_end_list = ft_lstlast(end_list);
		last_end_list->next = last_begin_list;
		last_begin_list->next = NULL;
	}
	*lst = end_list;
}
