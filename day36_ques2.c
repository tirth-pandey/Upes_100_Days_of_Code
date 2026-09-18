//Find the sum of all elements in a matrix.
#include <stdio.h>
int main()
{
int i, j;
int sum = 0;
 int rows, cols;
 printf("Enter no of rows: ");
 scanf("%d",&rows);
 printf("Enter no of columns: ");
 scanf("%d",&cols);
 int matrix[rows] [cols];
 for(i = 0;i < rows; i++) {
    for(j = 0;j < cols; j++) {
       scanf("%d", &matrix[i] [j]);
  }
}
for(i=0; i < rows; i++) {
   for(j=0; j< cols; j++){
  sum = sum + matrix[i] [j];
  }
}
printf("The sum of the matrix is: %d\n",sum);
return 0;
}

