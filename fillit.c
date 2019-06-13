/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:18:13 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 15:08:36 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
//seconde proposition of backtraking
int 	cor_backtrack(char **grid, t_list *lst, int size, int position)
{
	if (!lst)
		return (1);
	while (position < size * size)
	{
		if (ft_check_position(grid, position, size, lst->content))
		{
			ft_put_piece(grid, position, size, lst->content);
			if(cor_backtrack(grid, lst->next, size, 0));
				return (1);
			ft_rm_piece(grid, position, size, lst->content);
		}
		position++;
	}
	return (0);
}
//first proposition of backtraking
int		ft_backtrack(char **grid, t_list *lst, int size, int position)
{
	int ret;

	// si toute les pieces sont placees retourne 1
	if (!lst)
		return (1);
	ret = 0;
	// tant que pas arrivee a la fin ou place toutes les pieces
	while (ret == 0)
	{
		// tant que pas trouvee de position, test prochaine position
		while (!(ret = ft_check_position(grid, position, size, lst->content)))
			position++;
		// si position trouvee
		if (ret > 0)
		{
			// enregistre la piece sur la grille
			ft_put_piece(grid, position, size, lst->content);
			// passe a la prochaine piece
			if((ret = ft_backtrack(grid, lst->next, size, 0)) != 1)
				ft_rm_piece(grid, position++, size, lst->content);
		}
		// pas de position trouvee
		else
			return (0);
	}
	// si place toutes les pieces le retour sera de 1 (debut de la fonction) sinon 0 (ci-dessus)
	return (ret);
}

int		ft_solve(t_list *lst)
{
	char	**grid;
	int		size;

	// taille minimun de depart
	size = ft_start_size(lst);
	// generation de la gille
	grid = ft_gen_grid(size);
	// tant que grille NOK
	int i = cor_backtrack(grid, lst, size, 0);
	printf("I = %d\n", i);
	
	while (!(cor_backtrack(grid, lst, size, 0)))
	{
		// libere la grille puis augmente size
		ft_free_grid(grid, size++);
		// cree une nouvelle grille
		grid = ft_gen_grid(size);
	}
	// affiche le resultat
	ft_print_grid(grid, size);
	// libere la memoire des pieces
	ft_free_coord(lst);
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*lst;

	if (argc != 2) // usage si mauvais nombre d'arguments
	{
		ft_putstr(USAGE);
		return (0);
	}
	else
		fd = open(argv[1], O_RDONLY); // ouverture fichier
	if (fd == -1) // erreur si probleme a l'ouverture du fichier
	{
		ft_putstr("error\n");
		return (0);
	}
	// lance la verification et l'enregistrement des pieces
	lst = ft_read_file(fd);
	if (lst)
	{
		//ft_lstreverse(&lst); // remet les pieces dans le bon ordre
		ft_solve(lst); // recherche de la solution
	}
	else
		ft_putstr("error\n"); // erreur si fichier incorrecte
	close(fd);
	return (0);
}