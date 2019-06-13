/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:36:59 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 12:27:13 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_rm_piece(char **grid, int position, int size, int *tab)
{
	int	x;
	int	y;
	int	i;

	x = position % size;
	y = position / size;
	i = 0;
	while (i < 8)
	{
		// enregistre supprime la piece au coordonnees
		grid[y + tab[i + 1]][x + tab[i]] = '.';
		i += 2;
	}
}

void	ft_put_piece(char **grid, int position, int size, int *tab)
{
	int	x;
	int	y;
	int	i;

	x = position % size;
	y = position / size;
	i = 0;
	while (i < 8)
	{
		// enregistre le char au coordonnees
		grid[y + tab[i + 1]][x + tab[i]] = tab[8];
		i += 2;
	}
}

int		ft_check_position(char **grid, int position, int size, int *tab)
{
	int	x;
	int	y;
	int	i;

	// fin de la grille
	if (position >= size * size)
		return (-1);
	i = 0;
	x = position % size;
	y = position / size;
	while (i < 8)
	{
		// si depasse la grille en x ou y
		if ((x + tab[i]) >= size || (y + tab[i + 1]) >= size)
			return (0);
		// si se superpose a une autre piece
		if (grid[y + tab[i + 1]][x + tab[i]] != '.')
			return (0);
		i += 2;
	}
	return (1);
}