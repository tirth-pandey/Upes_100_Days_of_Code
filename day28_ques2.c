//Read and print elements of a one-dimensional array.
#include <stdio.h>
int main(){
    int size, i;
   
   printf("Enter the size of the array: \n");
   scanf("%d", &size);
  
   int array[size];
  
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("\n--- Array Details ---\n");
    printf("Size of the array: %d elements\n", size);

    printf("Elements of the array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

