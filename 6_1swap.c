#include <stdio.h>

void swap(int, int);

int main(){
  int a = 5;
  int b = 7;
  swap(a, b);
  return 0;
}

void swap(int first, int second) {
  int temp = first;
  first = second;
  second = temp;
  printf("first: %d, second: %d", first, second);
}