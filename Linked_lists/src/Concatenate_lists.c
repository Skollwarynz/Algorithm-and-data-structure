   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list concatenate_lists(list l, list m){
      if(!l)
         return m;
      list tmp = l;
      while(tmp->next != NULL){
         tmp = tmp->next;
      }
      tmp->next = m;
      return l;
   }