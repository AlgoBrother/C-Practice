#include <stdio.h>

int sum(int a, int b){
  int c = a + b;
  return c; 
}
int main(){
  int a = 2;
  int b = 3;
  int c = sum(a,b);
  printf("%d", c);
  return 0;
}