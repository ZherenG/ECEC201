/* Homework 5: Question 1
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/

#include <stdio.h>


int g(int val)
{
  return val * val;
}

int sum(int (*op) (int val), int i, int j){
  if(i > j){
    return 0;
  }
  if( i == j){
    return g(i) + g(j);
  }
  if ( i < j){
    int diff = j - i;
    int x; 
    int total= 0;
    for(x = 0; x < diff; x++){
      total +=g(i+x);
      
    }
    total += g(j);
    return total;

    
  }
  return 0;
}
/* Your sum function goes here */


int main()
{
  printf("Result: %d\n", sum(g, 10, 20));

  return 0;
}