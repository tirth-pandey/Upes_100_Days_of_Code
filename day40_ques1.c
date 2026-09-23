//Perform diagonal traversal of a matrix.
#include <stdio.h>

#define MAX 100

int main() {
    int mat[MAX][MAX];
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nYour Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal Traversal:\n");
   
    for (int k = 0; k < rows + cols - 1; k++) {
 
        int i = (k < cols) ? 0 : k - cols + 1;
        
        int j = (k < cols) ? k : cols - 1;

      
        while (i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");

    return 0;
}
