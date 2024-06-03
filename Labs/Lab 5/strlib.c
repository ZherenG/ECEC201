#include "strlib.h"


int my_strlen (const char *str){
  int count = 0;
  int x = 0;
  for(x = 0; str[x] != '\0'; x++){
    
    count++;
  }

  return count;
}



int my_strcmp (const char *str1, const char *str2){

  // if( my_strlen(str1) == my_strlen(str2) ){
  //   return 0;
  // }
  // else{
    int x;
    if(str1[0] == '\0' || str2[0] == '\0'){
      return str1[0] - str2[0];
    }
    for(x = 0; str1[x] != '\0' && str2[x] != '\0';x++){
      if(str1[x] != str2[x]){
        return str1[x] - str2[x];
        }
    }
    return 0;


  
}




