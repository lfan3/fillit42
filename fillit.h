/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:11:57 by fhenrion          #+#    #+#             */
/*   Updated: 2019/06/08 15:09:11 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>

# define I_PIECE (int [8]) {0,0,0,1,0,2,0,3}
# define IH_PIECE (int [8]) {0,0,1,0,2,0,3,0}
# define O_PIECE (int [8]) {0,0,1,0,0,1,1,1}
# define L_PIECE (int [8]) {0,0,0,1,0,2,1,2}
# define LR_PIECE (int [8]) {0,0,1,0,2,0,0,1}
# define LD_PIECE (int [8]) {0,0,1,0,1,1,1,2}
# define LL_PIECE (int [8]) {2,0,0,1,1,1,2,1}
# define J_PIECE (int [8]) {1,0,1,1,0,2,1,2}
# define JR_PIECE (int [8]) {0,0,0,1,1,1,2,1}
# define JD_PIECE (int [8]) {0,0,1,0,0,1,0,2}
# define JL_PIECE  (int [8]) {0,0,1,0,2,0,2,1}
# define T_PIECE (int [8]) {1,0,0,1,1,1,2,1}
# define TR_PIECE (int [8]) {0,0,0,1,1,1,0,2}
# define TD_PIECE (int [8]) {0,0,1,0,2,0,1,1}
# define TL_PIECE (int [8]) {1,0,0,1,1,1,1,2}
# define S_PIECE (int [8]) {1,0,2,0,0,1,1,1}
# define SR_PIECE (int [8]) {0,0,0,1,1,1,1,2}
# define Z_PIECE (int [8]) {0,0,1,0,1,1,2,1}
# define ZR_PIECE (int [8]) {1,0,0,1,1,1,0,2}
# define USAGE "usage:\t./fillit source_file\n"

int		ft_compare_tab(int *tab1, int *tab2);
int		ft_compare_piece(int *tab, int i);
void	ft_normalize(int *tab);
int		*ft_parse_piece(char *piece, char c);
t_list	*ft_save_piece(char *piece, char c);
int		ft_check_piece(char *piece, int end);
t_list	*ft_read_file(int fd);
char	**ft_gen_grid(int size);
void	ft_free_grid(char **grid, int size);
void	ft_free_coord(t_list *lst);
void	ft_print_grid(char **grid, int size);
int		ft_start_size(t_list *lst);
void	ft_put_piece(char **grid, int position, int size, int *tab);
void	ft_rm_piece(char **grid, int position, int size, int *tab);
int		ft_check_position(char **grid, int position, int size, int *tab);
int		ft_backtrack(char **grid, t_list *lst, int size, int position);
int		ft_solve(t_list *lst);

#endif
