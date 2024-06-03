/* Homework 1: Question 4
   Compile with: gcc -o Q4 Q4.c
   Then run your compiled program with: ./Q4
*/

#include <stdio.h>

int main()
{
  int area;
  int num1;
  int num2;
  printf("Enter phone number [(xxx) xxx-xxxx]: \n");
  scanf("(%d) %d-%d",&area, &num1, &num2);
  printf("you entered %d.%d.%d", area, num1, num2);


  
  return 0;
}