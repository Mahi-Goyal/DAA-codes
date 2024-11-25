#include <stdio.h>
#include <limits.h>

int maxSubArraySum(int arr[], int size) {
    int max_so_far = INT_MIN;  // Initialize to the smallest possible integer
    int max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here += arr[i];

        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = maxSubArraySum(arr, n);
    printf("The maximum subarray sum is: %d\n", max_sum);

    return 0;
}
