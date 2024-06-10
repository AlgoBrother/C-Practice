// Program to check wether a number is armstrong or not.

#include <stdio.h>
int main(){
  int num, og_num, remainder, result = 0;
  printf("Enter number: ");
  scanf("%d", &num);
  og_num = num;
  while(og_num != 0){
    remainder = og_num%10; // dividing the number by 10 and getting its remainder, if we take 153, the loop will first divide the the number by 10 leaving remainder 3, 
    // then the loop will run again dividing 15 by 10 leaving 5, then again leaving the remainder 1. then the loop will break because og_num(Original Number) will now be equal to 0 making our while case 'False'.
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
