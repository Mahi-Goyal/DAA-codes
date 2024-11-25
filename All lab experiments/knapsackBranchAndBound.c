#include <stdio.h>
#include <stdlib.h>

// Structure to represent an item
typedef struct {
    int weight;
    int value;
} Item;

// Node structure to represent a state in the decision tree
typedef struct Node {
    int level;           // Level of node in decision tree (index of current item)
    int profit;          // Total profit so far
    int weight;          // Total weight so far
    float bound;         // Upper bound of maximum profit in subtree
} Node;

// Function to calculate the bound (upper bound of profit) for a node
float calculateBound(Node u, int n, int W, Item items[]) {
    if (u.weight >= W) return 0; // If weight exceeds capacity, bound is 0

    float bound = u.profit;
    int j = u.level + 1;
    int totalWeight = u.weight;

    // Include items until we reach the weight limit
    while (j < n && totalWeight + items[j].weight <= W) {
        totalWeight += items[j].weight;
        bound += items[j].value;
        j++;
    }

    // If there's still room, include the fraction of the next item
    if (j < n) {
        bound += (W - totalWeight) * ((float)items[j].value / items[j].weight);
    }

    return bound;
}

// Comparison function to sort items based on value/weight ratio
int compare(const void *a, const void *b) {
    Item *i1 = (Item *)a;
    Item *i2 = (Item *)b;
    float r1 = (float)i1->value / i1->weight;
    float r2 = (float)i2->value / i2->weight;
    return r2 > r1 ? 1 : -1;
}

// Function to find the maximum profit using Branch and Bound
int knapsack(Item items[], int n, int W) {
    // Sort items by value/weight ratio
    qsort(items, n, sizeof(Item), compare);

    // Create a priority queue (here we use an array and simulate it)
    Node queue[1000];
    int front = 0, rear = 0;

    // Initial node
    Node u, v;
    u.level = -1;
    u.profit = 0;
    u.weight = 0;
    u.bound = calculateBound(u, n, W, items);

    queue[rear++] = u;
    int maxProfit = 0;

    // Process nodes in queue
    while (front < rear) {
        u = queue[front++];
        
        if (u.level == n - 1) continue;

        // Move to the next level
        v.level = u.level + 1;

        // Case 1: Include the next item
        v.weight = u.weight + items[v.level].weight;
        v.profit = u.profit + items[v.level].value;

        if (v.weight <= W && v.profit > maxProfit) {
            maxProfit = v.profit;
        }

        v.bound = calculateBound(v, n, W, items);
        if (v.bound > maxProfit) {
            queue[rear++] = v;
        }

        // Case 2: Exclude the next item
        v.weight = u.weight;
        v.profit = u.profit;
        v.bound = calculateBound(v, n, W, items);

        if (v.bound > maxProfit) {
            queue[rear++] = v;
        }
    }

    return maxProfit;
}

int main() {
    int n, W;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter the maximum weight capacity: ");
    scanf("%d", &W);

    Item items[n];
    printf("Enter weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d (weight value): ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    int maxProfit = knapsack(items, n, W);

    printf("\nMaximum profit: %d\n", maxProfit);

    return 0;
}
