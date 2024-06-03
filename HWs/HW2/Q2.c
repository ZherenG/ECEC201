/* Homework 2: Question 2
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

int main()
{
  float income;
  float income2;
  float tax;
  printf("Enter Income number: \n");
  scanf("%f",&income);

  if(income <= 750){
    tax = 0.01*income;
  }
  else if (income <= 2250){
    income2 = income-750;
    
    tax = income2 * 0.02+7.5;
  }
  else if (income <= 3750){
    income2 = income-2250;
    tax = income2 * 0.03+37.5;
  }
  else if (income <= 5250){
    income2 = income-3750;
    tax = income2 * 0.04+82.5;
  }
  else if (income <= 7000){
    income2 = income-5250;
    tax = income2 * 0.05+142.5;
  }
  else if (income > 7000){
    income2 = income-7000;
    tax = income2 * 0.06+230;
  }

  printf("Enter Income number: %.2f \n",tax);

  return 0;
}