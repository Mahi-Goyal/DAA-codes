#include <stdio.h>

// Maximum number of items
#define MAX_ITEMS 100

// Structure to hold information about an item
typedef struct {
    int weight;
    int value;
} Item;

// Global variables to store the best value found and the best combination of items
int max_value = 0;
int best_combination[MAX_ITEMS];
int n; // Number of items
int W; // Maximum weight capacity

// Function to find the best combination of items
void knapsack(int i, int current_weight, int current_value, int combination[], Item items[]) {
    if (i == n) {
        // Base case: all items have been considered
        if (current_value > max_value) {
            max_value = current_value;
            for (int j = 0; j < n; j++) {
                best_combination[j] = combination[j];
            }
        }
        return;
    }

    // Skip the current item
    combination[i] = 0;
    knapsack(i + 1, current_weight, current_value, combination, items);

    // Include the current item, if within weight limit
    if (current_weight + items[i].weight <= W) {
        combination[i] = 1;
        knapsack(i + 1, current_weight + items[i].weight, current_value + items[i].value, combination, items);
    }
}

// Main function
int main() {
    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter the maximum weight capacity: ");
    scanf("%d", &W);

    Item items[MAX_ITEMS];
    printf("Enter weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d (weight value): ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    int combination[MAX_ITEMS] = {0}; // Array to keep track of current combination

    // Call knapsack function
    knapsack(0, 0, 0, combination, items);

    // Print the result
    printf("\nMaximum value: %d\n", max_value);
    printf("Items included (1: included, 0: not included):\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: %d\n", i + 1, best_combination[i]);
    }

    return 0;
}
