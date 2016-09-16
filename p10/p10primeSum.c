#include <stdio.h>
#include <stdlib.h>

int primes[1000000];
//store all the primes

//calculate the next prime, add the list
//index is last prime known so far
int nextPrime(int index){
  int n = primes[index];
  n++; //n is 3 now
  int ctr;
  int isPrime = 0; //flag
  while (!isPrime){
    for (ctr = 0; ctr <= index; ctr++){
      if (n % primes[ctr] == 0) break;
      if (ctr == index) {
	isPrime = 1;
	primes[index+1] = n;
      }
    }
    n++;
  }
}

long sumArr(int a[], int cap){
  int ctr;
  long sum = 0;
  for (ctr = 0; ctr < cap; ctr++){
    sum += a[ctr];
  }
  return sum;
}

int main(){
  primes[0] = 2;
  int i = 0;
  while (primes[i] < 2000000){
    nextPrime(i);
    //printf("prime:%d \n", primes[i]);
    i++;
  }
  //printf("%ld", sumArr(primes, i));
  return 0;
}
