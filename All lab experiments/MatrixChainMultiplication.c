#include <stdio.h>
#include <limits.h>

// Function to print the optimal parenthesization of matrices
void printOptimalParenthesis(int i, int j, int n, int bracket[][n], char *name) {
    if (i == j) {
        printf("%c", (*name)++);
        return;
    }

    printf("(");

    // Recursively put brackets around subexpressions
    printOptimalParenthesis(i, bracket[i][j], n, bracket, name);
    printOptimalParenthesis(bracket[i][j] + 1, j, n, bracket, name);

    printf(")");
}

// Function to find the minimum number of multiplications needed
int matrixChainMultiplication(int p[], int n) {
    // m[i][j] stores the minimum number of multiplications needed
    int m[n][n];
    // bracket[i][j] stores the index of the split point for optimal solution
    int bracket[n][n];

    // No cost for a single matrix multiplication
    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }

    // L is the chain length
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            // Try every possible split point and store the minimum result
            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    bracket[i][j] = k;  // Save split point for the optimal solution
                }
            }
        }
    }

    // Output the minimum number of multiplications
    printf("Minimum number of multiplications: %d\n", m[1][n - 1]);

    // Print the optimal parenthesization
    char name = 'A';
    printf("Optimal Parenthesization: ");
    printOptimalParenthesis(1, n - 1, n, bracket, &name);
    printf("\n");

    return m[1][n - 1];
}

int main() {
    int n;

    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    printf("Enter the dimensions of matrices (array of size %d):\n", n + 1);
    for (int i = 0; i <= n; i++) {
        printf("p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    matrixChainMultiplication(p, n + 1);

    return 0;
}
