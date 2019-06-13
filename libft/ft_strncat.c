/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:40:49 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	idst;
	size_t	isrc;

	idst = 0;
	while (dst[idst])
		idst++;
	isrc = 0;
	while (src[isrc] && isrc < n)
	{
		dst[idst] = src[isrc];
		isrc++;
		idst++;
	}
	dst[idst] = '\0';
	return (dst);
}
