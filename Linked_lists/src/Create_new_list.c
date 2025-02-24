   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"
   #include <errno.h>
    
   list create_new_list(int n){
     list new_list = (list)malloc(sizeof(struct List));
     if(!new_list){
        perror("Malloc");
        exit(EXIT_FAILURE);
     }
     new_list->n = n;
     new_list->next = NULL;
     return new_list;
   }
