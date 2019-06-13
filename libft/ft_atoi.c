/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:07:29 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:53:50 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		is_neg;
	int		res;
	char	*s;

	is_neg = 0;
	res = 0;
	s = (char *)str;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
		is_neg = 1;
	if (*s == '-' || *s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		res = (res * 10) + (*s - '0');
		s++;
	}
	if (is_neg)
		res = -res;
	return (res);
}
