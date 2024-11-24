#include<stdio.h>
int main()
{
    int n;
    printf("enter rows: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i == n | i == 1 | j == 1 | j == i)
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