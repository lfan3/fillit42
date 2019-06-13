/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:36:12 by fhenrion          #+#    #+#             */
/*   Updated: 2019/04/27 15:06:57 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	idest;
	int	isrc;

	idest = 0;
	while (dest[idest])
		idest++;
	isrc = 0;
	while (src[isrc])
	{
		dest[idest] = src[isrc];
		isrc++;
		idest++;
	}
	dest[idest] = '\0';
	return (dest);
}
