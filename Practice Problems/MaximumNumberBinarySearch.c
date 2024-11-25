#include <stdio.h>

int findMaximum(int arr[], int low, int high) {
    // Base case: if there's only one element left
    if (low == high) {
        return arr[low];
    }

    // Base case: if there are only two elements left
    if (high == low + 1) {
        return (arr[low] > arr[high]) ? arr[low] : arr[high];
    }

    int mid = low + (high - low) / 2;

    // Check if mid is the maximum
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
        return arr[mid];
    }

    // If the element at mid is greater than the next element, then the maximum
    // lies on the left side
    if (arr[mid] > arr[mid + 1]) {
        return findMaximum(arr, low, mid - 1);
    } else {
        // Otherwise, the maximum lies on the right side
        return findMaximum(arr, mid + 1, high);
    }
}

int main() {
    int arr[] = {1, 3, 8, 12, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMaximum(arr, 0, n - 1);
    printf("The maximum element in the bitonic array is: %d\n", maxElement);

    return 0;
}
