#include "mymath.h"
#include <limits.h>
void compute_fibs (unsigned long int *fibs, unsigned int *N) {
  int x; 
  fibs[0] = 0;
  fibs[1] = 1;

  for(x = 2; x < *N; x++){
    if(fibs[x-1] > ULONG_MAX-fibs[x-2]){
      *N = x;
      return;
      }
      fibs[x] = fibs[x-1]+fibs[x-2];
  }

}