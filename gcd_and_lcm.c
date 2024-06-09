#include <stdio.h>

int gcd(int a, int b){
  int gcd;
  for (int i = 1; i <= a && i <= b; ++i){
      if (a%i == 0 && b%i == 0){
        gcd = i;
      }
  }
  return gcd;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main(){
  int num1, num2;
  printf("Enter two numbers to find GDC of: \n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  int real_gcd = gcd(num1, num2);
  printf("GCD = %d\n", real_gcd);

  int real_lcm = lcm(num1, num2);
  printf("LCM = %d", real_lcm);


}