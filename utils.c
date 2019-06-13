/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:03:08 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 16:07:55 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_gen_grid(int size)
{
	char	**grid;
	int		i;

	i = -1;
	if (!(grid = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (++i < size)
	{
		grid[i] = (char*)malloc(sizeof(char) * (size + 1));
		ft_memset(grid[i], '.', (sizeof(char) * size));
		grid[i][size] = '\0';
	}
	grid[i] = NULL;
	return (grid);
}

void	ft_free_grid(char **grid, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(grid[i]);
	free(grid);
}

void	ft_free_coord(t_list *lst)
{
	t_list	*tmp;
	
	while (lst)
	{
		tmp = lst;
		free(tmp->content);
		lst = lst->next;
		free(tmp);
	}
}

void	ft_print_grid(char **grid, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_putendl(grid[i]);
		free(grid[i]);
	}
	free(grid);
}

int		ft_start_size(t_list *lst)
{
	int	size;
	int	hashes;

	size = 2;
	hashes = (ft_lstsize(lst) * 4);
	while (hashes > size * size)
		size++;
	return (size);
}

