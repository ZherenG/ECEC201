/* Homework 1: Question 2
   Compile with: gcc -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

#include <stdio.h>

int main()
{
  int x;
  int ans;
  printf("Enter a number: \n");
  scanf("%d",&x);


  ans = 3*x*x*x*x*x + 2*x*x*x*x -5*x*x*x - x*x + 7*x - 6;
  
  printf("%d \n",ans);



  return 0;
}


//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6