/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrsub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 14:12:25 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchrsub(char const *s, char c)
{
	size_t	len;
	int		i;
	char	*str;

	if (!s || !*s)
		return (NULL);
	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	if (!(str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < (int)len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
