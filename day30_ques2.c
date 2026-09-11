//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int size, i;
    int pos_count = 0, neg_count = 0, zero_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] > 0) {
            pos_count++; 
        } 
        else if(arr[i] < 0) {
            neg_count++;   
        } 
        else {
            zero_count++;
        }
    }

    printf("\nTotal Positive elements: %d\n", pos_count);
    printf("Total Negative elements: %d\n", neg_count);
    printf("Total Zero elements: %d\n", zero_count);

    return 0;
}
