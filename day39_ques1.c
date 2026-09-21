//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j;
    int isDistinct = 1; 

    printf("Enter the size of the square matrix (N x N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break; 
        }
    }
    printf("\nThe main diagonal elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    if (isDistinct) {
        printf("Result: All elements on the diagonal are DISTINCT.\n");
    } 
    else {
        printf("Result: The diagonal elements are NOT distinct (duplicates exist).\n");
    }

    return 0;
}
