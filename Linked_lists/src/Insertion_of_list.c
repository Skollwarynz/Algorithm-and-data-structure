   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   list insertion_of_list(list l, list m, int n){
      if(n == 0){
         return concatenate_lists(m, l);
      }
      else if(!l){
         return m;
      }
      else if(!m){
         return l;
      }
      else{
         l->next = insertion_of_list(l->next, m, n-1);
         return l;
      }
   }