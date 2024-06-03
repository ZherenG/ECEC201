/* Homework 6: Question 1
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *duplicate(char *str){
  
  char * arr = malloc(sizeof(str)*strlen(str));
  //printf("%lu \n", sizeof(str));
	strcpy(arr,str);
	
  if(malloc(sizeof(str)*strlen(str))==NULL){
    return NULL;
  }
  return arr;
  }


int main()
{
  char *dst;

  char *test = "Simplicity is the ultimate sophistication.";

  dst = duplicate(test);

  printf("%s", dst);

  free(dst);

  return 0;
}