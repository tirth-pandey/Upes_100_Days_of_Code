/*Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
 This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/
#include <stdio.h>

// Function to find the 1st occurrence index of the smallest element >= x
int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;       // Found a potential ceil, record index
            high = mid - 1;  // Look left for smaller or earlier occurrences
        } else {
            low = mid + 1;   // Look right
        }
    }

    return ans;
}

int main() {
    int n, x;

    // Input the size of the array
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[n];

    // Input the sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Find and print the ceiling index
    int index = findCeilIndex(arr, n, x);
    printf("Ceil index: %d\n", index);

    return 0;
}

