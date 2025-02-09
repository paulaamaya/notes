
/* Populate m by n matrix from user input
 * Paula Amaya
 * February 9, 2025
 */
#include <stdio.h>
#include <stdlib.h>

void printMatrix(float **matrix, int m, int n); 

int main(void)
{
  int m, n;
  // Read in dimensions
  printf("Please enter the number of rows: ");
  scanf("%d", &m);
  printf("Please enter the number of columns: ");
  scanf("%d", &n);
  
  // Dynamically allocate memory for row pointers 
  float ** matrix = malloc(m * sizeof(float *));
  // Dynamically allocate memory for column pointers 
  for (int i = 0; i < m; i++) {
    matrix[i] = malloc(n * sizeof(float));
  }

  // Populate the matrix from user input
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Please enter the element at [%d, %d]: ", i, j); 
      scanf("%f", &matrix[i][j]); 
    }
  }
  
  // Print matrix
  printMatrix(matrix, m, n);
}

void printMatrix(float **matrix, int m, int n){
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      // Print with 5 digits and 3 decimal places
      printf("%010.3f ", matrix[i][j]);
    }
    printf("\n"); 
  }
}

