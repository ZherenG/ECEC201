#include <stdio.h>

long int calc(int N){
  long answer = 0;
  long x;
  long evens = 0;
  long odds =0;
  for(x = 0; x <= 2*N; x++){
    if(x%2 == 1){
      odds += x*x;
    }
    else{
      evens += x*x;
    }
    }
  answer = evens-odds;

return answer;
  
}



int main() {
  int num;
  long answer;
  printf("Enter a number\n");
  scanf("%d",&num);

  answer = calc(num);
  printf("The sum of the first %d even and odd numbers is %ld \n",num, answer);
  return 0;
}