# fillit42
## The content and their functions in each file

**read.c**

    1. get_nb_tetriminos();
       countet the tetiminos number   
       
    2. get_line()      
       get each line of the sample file , seems useless for this moment;
       
    3. stock_tetri_tab_index()   
       creat a double table to stack each terminos in this table;
       
    4. stock_tetri_tab_content(); and fille_tetri_tab()   
       at first i try to fille the double table that created at step3 with the terminos content.
       but since, we changed the direction and worked on coordinate of each terminos, so the following
       two functions seem useless;

**coordinate.c**

    1. numberscmp()    
       compare two number and return the smallest one ;
       
    2. get_cooridnates() 
       get the coordinate of each terminos ;
    3. x_shift and y shift shifts the coordinate that we get from step2 to extrem left and top;
    
    4. int     *get_min_coordinate()   
       get the coordinate of a terminote which situated on the very top and left

**tab_trans.c**

    1. tablecmp();
       compare to int table  
       
    2. char_to_int()
       get the double int table which contains the the coordiate of each terminos.
       one dimention for the index of terminos and another dimentions contains coresponding
       coordinate.
       
    3. get_id_name()    
       get the name of each terminos , the names are defined in the fillit.h, but i think
       i think this function can be deleted in the future, because we just need the coordiante, 
       the name is not important. but there is a small good technique to get the id_name in this
       function. the function comes from the medium article 

**list.c**

    1. the commentary part is the double list    
       firstly i created a double list, but i am not sure wether it is nessasary,
    
    2. t_tetris -- in fillit.h the first typedef   
       the simple list
