#include <stdio.h>

void printSubset(int subset[], int subsetSize) {
    for (int i = 0; i < subsetSize; i++) {
        printf("%d ", subset[i]);
    }
    printf("\n");
}

// Recursive function to find subsets that sum up to the target
void subsetSum(int set[], int n, int subset[], int subsetSize, int total, int index, int target) {
    if (total == target) {
        printSubset(subset, subsetSize); // Print the current subset
        return;
    }

    if (index == n || total > target) {
        return; // Stop if no more elements or if total exceeds target
    }

    // Include the current element in the subset
    subset[subsetSize] = set[index];
    subsetSum(set, n, subset, subsetSize + 1, total + set[index], index + 1, target);

    // Exclude the current element from the subset and move to the next
    subsetSum(set, n, subset, subsetSize, total, index + 1, target);
}

void findSubsets(int set[], int n, int target) {
    int subset[n]; // Array to store the current subset
    subsetSum(set, n, subset, 0, 0, 0, target);
}

int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int n = sizeof(set) / sizeof(set[0]);
    int target = 35;

    printf("Subsets with sum %d are:\n", target);
    findSubsets(set, n, target);

    return 0;
}
