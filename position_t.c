int     ft_check_position(char **grid, int position, int size, int *tab)
{
    int i;

    i = 0;
    if (position >= size * size)
        return (-1);
    x = position % size;
    y = position / size;
    while (i < 8)
    {
        if ((x + tab[i])>= size || (y + tab[i + 1]>= size))   
            return (0);
        if (grid[y + tab[i + 1]][x + tab[i]]!= '.')
            return (0);
        i += 2;
    }
    return (1);
}

int     ft_backtrack(char **grid, t_list *list, int size, int position)
{
    int ret;
    if(!list)
        return (1);
    ret = 0;
    while (!(ret = ft_check_position(grid, position, size, lst->content)))
        position++;
    ft_put_piece(grid, position, size, lst->content);
    if((ret = ft_backtrack(grid, lst->next, size, 0)) != 1)
        ft_rm_piece()
}