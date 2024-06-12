#include <stdio.h>

long factorial(int n){
  if (n == 0){
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main(){
  int c = factorial(6);
  printf("%d", c);
  return 0;
}