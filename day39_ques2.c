//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
