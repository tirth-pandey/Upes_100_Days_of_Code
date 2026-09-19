//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
int i, j;
int rows, cols;
printf("Enter the no of rows: ");
scanf("%d",&rows);
printf("Enter the no of columns: ");
scanf("%d",&cols);
int matrix[rows] [cols];
printf("Enter the elements of the matrix: ");
for(i = 0;i < rows; i++) {
   for(j = 0;j< cols; j++) {
       scanf("%d",&matrix[i] [j]);
     }
  }
 int rowSums[3]; 
    for (int i = 0; i < rows; i++) {
        int sum = 0; 
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }
    printf("The row sums stored in the array are:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d Sum = %d\n", i, rowSums[i]);
    }

    return 0;
}
