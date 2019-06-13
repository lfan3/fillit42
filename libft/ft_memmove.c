/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:25:04 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 10:29:43 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdst;

	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	if (dst == src)
		return (dst);
	if (psrc <= pdst)
		while (n-- > 0)
			pdst[n] = psrc[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
