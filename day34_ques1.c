//Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int arr[100];
    int size, i, position, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert (1 to %d): ", size + 1);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if (position < 1 || position > size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
    } else {
    
        for (i = size - 1; i >= position - 1; i--) {
            arr[i + 1] = arr[i];
        }

        arr[position - 1] = element;

        size++;

        printf("Resultant array is:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
