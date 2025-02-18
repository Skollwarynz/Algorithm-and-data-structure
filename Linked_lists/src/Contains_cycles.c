   #include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include "../include/linked_list.h"
   #include "../include/alghoritms.h"

   bool contains_cycles(list l){
        if(!l){
            return false;
        }
        else if(!l->next){
            return false;
        }
        else{
            list slow = l;
            list fast = l->next;
            while(fast && fast->next){
                if(slow == fast){
                    return true;
                }
                fast = fast->next->next;
                slow = slow->next;
            }
        return false;
        }
   }