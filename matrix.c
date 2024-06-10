//Code to make a matrix from user input.

#include <stdio.h>
#define max_size 3 // defining max size of our matrix to be 3.

void matrix_creation(int row, int column, int a[max_size][max_size]){
  for (int i = 0; i < row; i++){ // row iteration
    for (int j = 0; j < column; j++){ // column iteration
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  }
}


void print_matrix(int row, int column, int a[max_size][max_size]){
  for (int i = 0; i < row; i++){
    for (int j = 0; j < column; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
  }
  
}


int main(){
  int matrix[max_size][max_size]; //matrix

  int row;
  printf("Enter number of rows: ");
  scanf("%d", &row);

  int column;
  printf("Enter number of columns: ");
  scanf("%d", &column);

  matrix_creation(row, column, matrix);
  print_matrix(row, column, matrix);

}