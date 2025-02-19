   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

    list split_list(list l){
        int lenght = length_of_list(l);
        lenght = (lenght+1)/2;
        list tmp = l;
        for(int i = 0; i < lenght; i++){
            tmp = tmp->next;
        }
        list return_list = tmp;
        tmp = NULL;
        return return_list;
    }