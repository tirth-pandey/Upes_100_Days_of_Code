//Add two matrices.
#include <stdio.h>
int main(){
    int rows, cols;
    printf("Enter the no of rows and cols:");
    scanf("%d %d", &rows, &cols);
    int first[rows] [cols];
    int second[rows] [cols];
    int sum[rows] [cols];
printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n"); // Moves to the next line after printing a full row
    }

    return 0;
}
