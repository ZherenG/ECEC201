/* Homework 5: Question 2
   Compile with: gcc -std=c89 -Wall -Wpedantic -Werror -fno-common -o Q2 Q2.c
   Then run your compiled program with: ./Q2
*/

#include <stdio.h>


struct fraction {
  int numerator;
  int denominator;
};


void reduce(struct fraction *f)
{
  int n,m,remainder;
  m = f->numerator;
   n=f->denominator;
   while(n!=0){
       remainder = m%n;
       m=n;
       n=remainder;
   }
   if(m!=0){
       f->numerator = f->numerator/m;
       f->denominator = f->denominator/m;
   }
   if(f->denominator<0){
       f->numerator=-1;
       f->denominator=-1;
   }
}
  /* Your code goes here */



void add(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  
  int g1,g2,k1,k2;
  g1 = f1->numerator;
  g2 = f1->denominator;
  k1= f2->numerator;
  k2 =f2->denominator;
  
  g1*=k2;
  k1*=g2;
  
  result->numerator = g1+k1;
  result->denominator = g2*k2;
  reduce(result);
  /* Your code goes here */
}


void subtract(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  int g1,g2,k1,k2;
  g1 = f1->numerator;
  g2 = f1->denominator;
  k1= f2->numerator;
  k2 =f2->denominator;
  
  g1*=k2;
  k1*=g2;
  
  result->numerator = g1-k1;
  result->denominator = g2*k2;
  reduce(result);
  /* Your code goes here */
}


void multiply(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  
  int g1,g2,k1,k2;
  g1 = f1->numerator;
  g2 = f1->denominator;
  k1= f2->numerator;
  k2 =f2->denominator;
  result->numerator = g1*k1;
  result->denominator = g2*k2;
  reduce(result);
  /* Your code goes here */
}


void divide(struct fraction *result, const struct fraction *f1, const struct fraction *f2)
{
  int g1,g2,k1,k2;
  g1 = f1->numerator;
  g2 = f1->denominator;
  k1= f2->numerator;
  k2 =f2->denominator;
  result->numerator = g1*k2;
  result->denominator = g2*k1;
  reduce(result);
  /* Your code goes here */
}


int main()
{
  struct fraction result; 
  
  struct fraction f1 = {20, 15}; 
  struct fraction f2 = {22, 12}; 
  struct fraction f3 = { 4, 12}; 

  reduce(&f1);
  printf("Reduce f1: %d/%d\n", f1.numerator, f1.denominator);

  add(&result, &f2, &f3);
  printf("  f2 + f3: %d/%d\n", result.numerator, result.denominator);

  subtract(&result, &f2, &f3);
  printf("  f2 - f3: %d/%d\n", result.numerator, result.denominator);

  multiply(&result, &f2, &f3);
  printf("  f2 * f3: %d/%d\n", result.numerator, result.denominator);

  divide(&result, &f2, &f3);
  printf("  f2 / f3: %d/%d\n", result.numerator, result.denominator);

  return 0;
}