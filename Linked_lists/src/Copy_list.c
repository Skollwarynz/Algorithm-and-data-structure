   #include <stdio.h>
   #include <stdlib.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list copy_list(list l){
    if (l == NULL)
        return NULL;
    else
        return add_node(l->n, copy_list(l->next));
    }