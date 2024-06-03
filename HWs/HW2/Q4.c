/* Homework 2: Question 4
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q4 Q4.c
   Then run your compiled program with: ./Q4
*/

int main()
{
  int area;
  int digits = 0; 
  printf("Enter a number: \n");
  scanf("%d",&area);
  int area2 = area;


do{
    area/=10;
    digits++;

  
}while(area>0);
  
  
  printf("The number %d has %d digits \n", area2,digits);
 
  return 0;
}