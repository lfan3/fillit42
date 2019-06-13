/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 11:24:19 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	search_i;
	size_t	find_i;

	if (!*to_find)
		return ((char *)str);
	search_i = 0;
	while (str[search_i] && search_i < n)
	{
		if (str[search_i] == *to_find)
		{
			find_i = 0;
			while (str[search_i + find_i] == to_find[find_i] &&
					str[search_i + find_i] && to_find[find_i] &&
					(search_i + find_i) < n)
				find_i++;
			if (!to_find[find_i])
				return ((char *)(str + search_i));
		}
		search_i++;
	}
	return (NULL);
}
