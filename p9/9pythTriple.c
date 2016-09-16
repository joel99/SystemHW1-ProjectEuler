#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//returns c
int pyth(int a, int b){
  
  float z = sqrt(a * a + b * b); //implicit cast to double
  if (fabsf(roundf(z) - z) <= 0.001f){
    return (int)z;
  }
  else return 0; //if we return 0, case will be false. 
}

int main(){
  int a, b;
  for (a = 1; a < 334; a++){//cap is 1000/3
    for (b = a; a + 2*b < 1000; b++){
      if (a + b + pyth(a,b) == 1000)   
	printf("%d", a * b * pyth(a,b));
    }
  }
  return 0;
}

