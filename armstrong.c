// Program to check wether a number is armstrong or not.

#include <stdio.h>
int main(){
  int num, og_num, remainder, result = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  og_num = num;
  while(og_num != 0){
    remainder = og_num%10;
    result += remainder * remainder * remainder;
    og_num /= 10; // removing the last digit from the number 
  }

  if (result == num){
    printf("Armstrong Number");
  } else {
    printf("Not Armstrong Number");
  }

  return 0;
}