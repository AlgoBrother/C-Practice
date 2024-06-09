#include <stdio.h>
int main(){
  printf("Welcome to Simple Calculator\n");
  printf("Choose: \n");
  printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
  int choice;
  scanf("%d", &choice);
  switch(choice){
    case 1: {
      printf("How many number do you want to add?\nAnswer: ");
      int add_num;
      scanf("%d", &add_num);
      double sum = 0;
      for(int i = 1; i <= add_num; ++i){
        double num;
        printf("%d. Enter number: ", i);
        scanf("%lf", &num);
        sum = num + sum;
      } 
      printf("The sum is: %.2lf", sum);
      break;
    }

    case 2: {
      double num1, num2;
      printf("Enter two numbers for subtraction: ");
      scanf("%lf %lf", &num1, &num2);
      printf("The result is: %.2lf\n", num1 - num2);
      break;
    }

    case 3: {
      double num1, num2;
      printf("Enter two numbers for subtraction: ");
      scanf("%lf", &num1);
      scanf("%lf", &num2);
      double mul = num1 * num2;
      printf("Multiplication of %.2lf and %.2lf is %.2lf", num1, num2, mul);
      break;
    }

    case 4: {
      double num1, num2;
      printf("Enter two numbers for subtraction: ");
      scanf("%lf", &num1);
      scanf("%lf", &num2);
      
      if (num2 != 0){
        double div = num1 / num2;
        printf("Multiplication of %.2lf and %.2lf is %.2lf", num1, num2, div);
      } else{
        printf("Division not possible.");
      }
      break;
    }

    default: {
      printf("Invalid Choice. Please select the number in the Simple Calculator Menu.");
      break;
    }
    
  }
  
  return 0;
}