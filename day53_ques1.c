/*Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index 
is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <stdio.h>

// Function to find the pivot index
int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of all elements in the array
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    // Iterate through the array to find the pivot index
    for (int i = 0; i < numsSize; i++) {
        // If left sum equals the right sum (totalSum - leftSum - currentElement)
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; // Return the leftmost pivot index
        }
        leftSum += nums[i];
    }

    // Return -1 if no pivot index exists
    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("-1\n");
            return 0;
        }
    }

    // Find and print the result
    int result = pivotIndex(arr, n);
    printf("Pivot Index: %d\n", result);

    return 0;
}
