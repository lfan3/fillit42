#include "fillit.h"
#include <stdio.h>
//step 1 get the coordinate 
//step 2, compare the define PIECE
//step 3, if the compare is ok, then put in the list.
int     tablecmp(int *tab1, int *tab2)
{
    int i;

    i = 0;
    while(i < 8)
    {
        if (tab1[i] != tab2[i])
            return (0);
        i++;
    }
    return (1);
}

int   **char_to_int(char *buf, int read_size, int tetri_nb)
{
   
    char **tetris;
    int i;
    int **tab;

    i = 0;
   
    tetris = fill_tetri_tab(buf, tetri_nb);
    
    if(!(tab = (int **)malloc(sizeof(int *) * tetri_nb)))
        printf("error");
    while (i < tetri_nb)
    {   
        tab[i] = get_coordinates(tetris[i]);
        tab[i] = get_min_coordinate(tab[i]);  
        i++;     
    }
    return (tab);
}
   
char     *get_id_name(int *tab)
{
    char *id;

    id = NULL;
    // il faut mettre parentese dans chaque cote de variable
    // good technique!
    (tablecmp(I_PIECE, tab))&&(id = "I_PIECE");
    (tablecmp(IH_PIECE, tab))&&(id = "IH_PIECE");
    (tablecmp(O_PIECE, tab))&&(id = "O_PIECE");
    (tablecmp(L_PIECE, tab))&&(id = "L_PIECE");
    (tablecmp(LR_PIECE, tab))&&(id = "LR_PIECE");
    (tablecmp(LD_PIECE, tab))&&(id = "LD_PIECE");
    (tablecmp(LL_PIECE, tab))&& (id = "LL_PIECE");
    (tablecmp(J_PIECE, tab))&&(id = "J_PIECE");
    (tablecmp(JR_PIECE, tab))&&(id = "JR_PIECE");
    (tablecmp(JD_PIECE, tab))&&(id = "JD_PIECE");
    (tablecmp(JL_PIECE, tab))&&(id = "JL_PIECE");
    (tablecmp(T_PIECE, tab))&&(id = "T_PIECE");
    (tablecmp(TR_PIECE, tab))&&(id = "TR_PIECE");
    (tablecmp(TD_PIECE, tab))&&(id = "TD_PIECE");
    (tablecmp(TL_PIECE, tab))&&(id = "TL_PIECE");
    (tablecmp(S_PIECE, tab))&&(id = "S_PIECE");
    (tablecmp(SR_PIECE, tab))&&(id = "SR_PIECE");
    (tablecmp(Z_PIECE, tab))&&(id = "Z_PIECE");
    (tablecmp(ZR_PIECE, tab))&&(id = "ZR_PIECE");
    
    return (id);
}

       
