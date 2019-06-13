/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 13:14:40 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdigit(int n)
{
	size_t	count;

	count = 0;
	while (n /= 10)
		count++;
	return (count + 1);
}

char			*ft_itoa(int n)
{
	int			is_neg;
	char		*str;
	size_t		size;

	is_neg = 0;
	size = ft_countdigit(n);
	if (!(str = ft_strnew(size + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
		size++;
	}
	str += size;
	while (size--)
	{
		*--str = (char)(n % 10 + '0');
		n /= 10;
		if (is_neg && size == 0)
			*str = '-';
	}
	return (str);
}
