#include<stdio.h>
int main()
{
    int n;
    printf("enter rows: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= (2*i - 1); k++)
        {
            if(i == 1 | i == n | k == 1 | k == (2*i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}