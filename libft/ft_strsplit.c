/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:32:00 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/02 17:51:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(const char *s, int start, char c)
{
	size_t	len;

	len = 0;
	while (s[start + len] != c && s[start + len])
		len++;
	return (len);
}

char			**ft_strsplit(const char *s, char c)
{
	int		word_count;
	int		word_index;
	int		s_index;
	char	**tab;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	s_index = 0;
	word_index = -1;
	while (++word_index < word_count)
	{
		while (s[s_index] == c)
			s_index++;
		tab[word_index] = ft_strsub(s, s_index, word_len(s, s_index, c));
		while (s[s_index] && s[s_index] != c)
			s_index++;
	}
	tab[word_count] = 0;
	return (tab);
}
