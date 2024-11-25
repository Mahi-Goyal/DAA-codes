#include <stdio.h>
int main() {
    int i, j, space;
    for(i = 5; i >= 1; i--) {
        for(space = 0; space < 5 - i; space++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("%c ", 'A' + i - 1);
        printf("\n");
    }
    for(i = 2; i <= 5; i++) {
        for(space = 1; space <= 5 - i; space++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("%c ", 'A' + i - 1);
        printf("\n");
    }
    return 0;
}
