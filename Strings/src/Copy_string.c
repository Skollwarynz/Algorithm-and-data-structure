#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "../include/string_alghoritms.h"

char* copy_string(char* s){
  if(!s){
    perror("input string");
    exit(EXIT_FAILURE);
  }
  char* ret = (char*)malloc(sizeof(char) *  string_lenght(s));
  int i = 0;
  while(s[i] != '\0'){
    ret[i] = s[i];
    i++;
  }
  ret[i] = '\0';
  return ret;
}

