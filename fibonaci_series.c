#include <stdio.h>
int main(){
  int term1 = 0;
  int term2 = 1; // Initializing first two digits of Fibonacci Series.
  int next_term = term1 + term2;
  int num;
  printf("Enter the number of terms you want in series: ");
  scanf("%d", &num);

  printf("Fibonacci Series: %d, %d, ", term1, term2); // Printing the Fibonacci Series.

  for (int i = 3; i < num; ++i){
    printf("%d, ", next_term);
    term1 = term2;
    term2 = next_term;
    next_term = term1 + term2;
  }

  return 0;
}