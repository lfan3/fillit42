/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:43:56 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istns(char c)
{
	return (c == '\t' || c == '\n' || c == ' ');
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_istns(s[start]))
		start++;
	if (!*s || end == start - 1)
		return (ft_strnew(0));
	while (ft_istns(s[end]))
		end--;
	return (ft_strsub(s, start, (end - start + 1)));
}
