/* Homework 2: Question 1
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q1 Q1.c
   Then run your compiled program with: ./Q1
*/

int main()
{
  int area;
  int digits; 
  printf("Enter a number: \n");
  scanf("%d",&area);

  if(area < 10){
    digits = 1;
  }
  else if (area < 100){
    digits = 2;
  }
  else if ( area < 1000){
    digits = 3;
  }
  printf("The number %d has %d digits \n", area,digits);


  return 0;
}