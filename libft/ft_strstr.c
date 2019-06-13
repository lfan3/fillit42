/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:17:53 by fhenrion          #+#    #+#             */
/*   Updated: 2019/04/26 11:40:32 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int	search_i;
	int	find_i;

	if (!*to_find)
		return ((char *)str);
	search_i = 0;
	while (str[search_i])
	{
		if (str[search_i] == *to_find)
		{
			find_i = 0;
			while ((str[search_i + find_i] == to_find[find_i])
					&& str[search_i + find_i])
				find_i++;
			if (!to_find[find_i])
				return ((char *)(str + search_i));
		}
		search_i++;
	}
	return (0);
}
