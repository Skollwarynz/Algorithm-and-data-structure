   #include <stdio.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list merge_int(list l, list m){
      if(!l)
         return m;
      else if(!l)
         return l;
      
      else if(l->n < m->n){
         l = merge(l->next, m);
         return l;
      }   
      else{
      m = merge(l, m->next);
      return m;
      }     
   }
