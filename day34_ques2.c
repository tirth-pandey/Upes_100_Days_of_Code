//Delete an element from an array.
#include <stdio.h>

int main() {
    int arr[100];
    int size, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", size);
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position! Deletion is not possible.\n");
    } else {
       
        for (i = position - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
