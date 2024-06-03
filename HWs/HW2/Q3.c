/* Homework 2: Question 3
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q3 Q3.c
   Then run your compiled program with: ./Q3
*/

int main()
{
  int days;
  int start;
  
  printf("Enter Number of days in month: \n");
  scanf("%d",&days);
  printf("Enter starting day of the week (1 = Sun, 7= Sat): \n");
  scanf("%d",&start);
  for (int x = 0; x <start; x++){
    printf("  ");
  }
  
  for(int i = 1; i <= days; i++){
    printf("%3d",i);
    if(start % 7 == 0){
      printf("\n");
    }
    start++;
    
  }
  printf("\n");


  return 0;
}