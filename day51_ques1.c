/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. You need to print the first and last
occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
*/
#include <stdio.h>

// Function to find the first occurrence of the target
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int firstIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            firstIndex = mid;
            high = mid - 1; // Keep searching on the left side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstIndex;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int lastIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            lastIndex = mid;
            low = mid + 1; // Keep searching on the right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastIndex;
}

int main() {
    int n, target;

    // Input the size of the array
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    // Input the sorted array elements
    printf("Enter %d sorted elements (repeats allowed):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrences
    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    // Print the results
    if (first != -1) {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    } else {
        printf("-1, -1\n");
    }

    return 0;
}
