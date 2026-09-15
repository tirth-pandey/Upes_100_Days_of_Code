//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100]; 
    int size, i, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    arr[i + 1] = element;
   
    size++;
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
