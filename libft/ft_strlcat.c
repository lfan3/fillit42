/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:43:35 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	end_dst;

	i = 0;
	end_dst = ft_strlen(dst);
	if (n <= end_dst)
		return (n + ft_strlen(src));
	while ((i + end_dst) < (n - 1) && src[i])
	{
		dst[i + end_dst] = src[i];
		i++;
	}
	dst[i + end_dst] = '\0';
	return (end_dst + ft_strlen(src));
}
