#include "fillit.h"
#include <stdio.h>
/*  DOUBLE LIST
t_dlist    *create()
{
    t_dlist *new = (t_list *)malloc(sizeof(*new));
    if (new == NULL)
        return NULL;
    new->index = 0;
    new->p_head = NULL;
    new->p_tail = NULL;
    return (new);
}

t_dlist     *append(t_dlist *new, void *tetm, char *name)
{
    if (new == NULL)
        return NULL;
    t_tetrim    *new_tet = (t_tetrim *)malloc(sizeof(*new_tet));
    if (new_tet == NULL)
        return (NULL);
    new_tet->tetrim = tetm;
    new_tet->order = 'A' + new->index;
    new_tet->name = name;
    new_tet->next = NULL;
    if (new -> p_tail == NULL)
    {
        new_tet->pre = NULL;
        new->p_tail = new_tet;
        new->p_head = new_tet;
    }
    else
    {
        new->p_tail->next = new_tet;
        new_tet->pre = new->p_tail;
        new->p_tail = new_tet;
    }
    new->index++;
    return (new);
}
*/
//SIMPLE LISTE
// perhpas not nessasary to create a liste according  the table

t_tetris    *creator(char *tet_id, char c, int *tet_pattern)
{
    t_tetris *new = (t_tetris *)malloc(sizeof(*new));
    if (new == NULL)
        return (NULL);
    new->tet_id = tet_id;
    new->tet_pattern = tet_pattern;
    new->c = c;
    return (new);
}

t_tetris    *list_append(t_tetris *head, int *tab, char c)
{
    t_tetris *tmp;
    t_tetris *new;
    char *tet_id;

    tmp = head;
    tet_id = get_id_name(tab);
    while (tmp->next)
        tmp = tmp->next;
    new = creator(tet_id, c, tab);
    tmp->next = new;
    new->next = NULL;
    return (head);
}

t_tetris    *list_creator(int **tab, int read_size)
{
    char *tetid;
    int tetri_nb;
    int counter;
    t_tetris *head;

    counter = 1;
    tetri_nb = get_nb_tetriminos(read_size);
    head = creator(get_id_name(tab[0]),'A', tab[0]);
    while (counter < tetri_nb)
    {
        head = list_append(head, tab[counter], ('A' + 1));
        counter++;
    }
    return(head);
}
