#include "fillit.h"
#include <stdio.h>        
#include <fcntl.h>

int main(int ac, char **av)
{
    char buf[BUF_SIZE];
    int read_size;
    int	fd;
    int **tab;
    int tetri_nb;
    t_tetris *head;
     
	if (ac == 1)
		fd = 0;
	if (ac == 2)
    fd = open(av[1], O_RDONLY);

  read_size = read(fd, buf, BUF_SIZE);
  buf[read_size] = 0;
  tetri_nb = get_nb_tetriminos(read_size);
  tab = char_to_int(buf, read_size, tetri_nb);
  head = list_creator(tab, read_size);
  t_tetris *tmp;
  tmp = head;
  while (tmp)
  {
    printf("tet_id: %s\n", tmp->tet_id);
    int k = 0;
    while(k < 8)
    {
      printf("tet_pattern: %d ", tmp->tet_pattern[k]); 
      k++;
    }
    printf("\n"); 
    tmp = tmp->next;
  }
  int size;
  size = begin_size(tetri_nb);
  printf("the size is %d\n", size);
  printf("the nb is %d\n", tetri_nb); 
        
}