   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"
   #include <errno.h>

   list add_node(int value, list l){
        list new_list = (list)malloc(sizeof(struct List));
        if (!new_list) {
            perror("Add_node malloc");
            exit(1);
        }
        new_list->n = value;
        new_list->next= l;
        return new_list;
   }