#include "fillit.h"
#include <stdio.h>

/*count the Tertriminos nb*/
int     get_nb_tetriminos(int read_size)
{
    int nb_tetriminos;

    nb_tetriminos = read_size / 20;
    
    return (nb_tetriminos);
}

/* get each line of buf, except the line of $*/
// the function is perhaps not utile, i have not used it yet
char    **get_line(char *buf)
{ 	 
    char **tab_line;
    
    tab_line = ft_strsplit(buf, '\n');
  /*
    printf("%s\n", tab[0]);
    printf("%s\n", tab[1]);
     printf("%s\n", tab[2]);
    printf("%s\n", tab[3]);
     printf("%s\n", tab[4]);
    printf("%s\n", tab[5]);
    printf("%s\n", tab[6]);
    printf("%s\n", tab[7]);
    */
    return (tab_line);
}

char    **stock_tetri_tab_index(int nb_tetriminos)
{
    char **tetri_tab_index;
     
    tetri_tab_index = (char **)malloc(sizeof(char *) * (nb_tetriminos + 1));
    if (!tetri_tab_index)
        return (NULL);
    
    return tetri_tab_index;
}

char    *stock_tetri_tab_content(char *buf1)
{
    char *tetri_tab_content;
    int j;

    j = 0;
    tetri_tab_content = (char *)malloc(sizeof(char) * 21);
    if (!tetri_tab_content)
        return (NULL);
   // printf("first letter of buf1 %c \n", buf1[0]);
    while (j < 20)
    {
        tetri_tab_content[j] = buf1[j];  
       
        j++;
    } 
    tetri_tab_content[j] = 0;         
    return tetri_tab_content;
}

char    **fill_tetri_tab(char *buf, int nb_tetriminos)
{
    int index;
    int j;
    char **tab_tetri;

    index = 0;
   
    tab_tetri = stock_tetri_tab_index(nb_tetriminos);
    while (index < nb_tetriminos)
    {
        tab_tetri[index] = stock_tetri_tab_content(buf);
        j = 0;
        while (j < 21)
        {
            buf++;
            j++;
        }
        index++;
    }
    return tab_tetri;
} 
 