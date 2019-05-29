#include "fillit.h"
#include <stdio.h>

int     numberscmp(int nb1, int nb2)
{
    int i = 0;
    if (nb1 > nb2)
        return (nb2);
    return (nb1);
}
/********************** very trickyyyy function ****************/
// first mistake this fonction can not return local variable, except for static varialbe
// but when i use a local variable or if i use a pointer, it will  juste returned to me
//a fixed adresse. which is very embarrasing, because, very time i call it, it will juste
//replace the old value by the new value
//conclusion: i must to malloc use dynamic memomry.
/************************************ !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
int    *get_coordinates(char *str)
{
    int i;
   // static int tab[8];
   int tab[8];
   int *tap;
    int x;
    int y;
    int tab_index;

    x = 0;
    y = 0;
    tab_index = 0;
    i = 0;
    while (i < 19)
    {
      
        if (str[i] == '#')
        {
            tab[tab_index] = x;
            tab[tab_index + 1] = y;
            tab_index = tab_index + 2;
        }    
        if (str[i] == '\n')
        {
            x = -1;
            y++;
        }
        i++;
        x++;
    }
    int k = 0;
    printf("get coor :\n");
    while (k < 8)
    {
        printf("%d", tab[k]);
        k++;
    }
     printf(" \n");
     tap = tab;
     printf("tap %p", tap);
    return tap;
}
**************************************************************************/

int    *get_coordinates(char *str)
{
    int i;
   int *tab;
    int x;
    int y;
    int tab_index;

    tab = (int *)malloc(sizeof(int) * 8);
    x = 0;
    y = 0;
    tab_index = 0;
    i = 0;
    while (i < 19)
    {
      
        if (str[i] == '#')
        {
            tab[tab_index] = x;
            tab[tab_index + 1] = y;
            tab_index = tab_index + 2;
        }    
        if (str[i] == '\n')
        {
            x = -1;
            y++;
        }
        i++;
        x++;
    }
   
    return tab;
}

void    x_shift(int *tab)
{
    int n = 0;
    int x1;
    int x2;
    int x_min;

    x1 = numberscmp(tab[0],tab[2]);
    x2 = numberscmp(tab[4], tab[6]);
    x_min = numberscmp(x1, x2);
    while(n <= 3)
    {
        tab[2*n] = tab[2
        *n] - x_min;
        n++;
    }     
}

void    y_shift(int *tab)
{
    int n = 0;
    int y1;
    int y2;
    int y_min;

    y1 = numberscmp(tab[1],tab[3]);
    y2 = numberscmp(tab[5], tab[7]);
    y_min = numberscmp(y1, y2);
    while(n <= 3)
    {
        tab[2*n + 1] = tab[2*n + 1] - y_min;
        n++;
    }     
}

int     *get_min_coordinate(int *tab)
{
    x_shift(tab);
    y_shift(tab);
    return (tab);
}


