   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list intersection_of_list(list l, list m){
      if(!l)
         return NULL;
      else if(!m)
         return NULL;
      else{
         if(l->n == m->n){
            list rest = intersection_of_list(l->next, m->next);
            return add_node(l->n, rest);
         }
         else if(l->n < m->n)
            return intersection_of_list(l->next, m);
         else
            return intersection_of_list(l, m->next);
      }
   }