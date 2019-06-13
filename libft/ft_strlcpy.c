/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:49:05 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (src[j])
		j++;
	while (i < (size - 1))
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (j);
		}
		i++;
	}
	dest[i] = '\0';
	return (j);
}
