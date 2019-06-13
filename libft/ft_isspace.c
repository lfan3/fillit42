/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 11:45:32 by fhenrion          #+#    #+#             */
/*   Updated: 2019/04/29 18:35:13 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if ((unsigned char)c == ' ' ||
		(unsigned char)c == '\n' ||
		(unsigned char)c == '\v' ||
		(unsigned char)c == '\t' ||
		(unsigned char)c == '\f' ||
		(unsigned char)c == '\r')
		return (1);
	return (0);
}
