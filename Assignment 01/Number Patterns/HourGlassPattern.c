#include<stdio.h>
int main()
{
    int n;
    printf("enter rows in upper part of hour glass: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i <= n; i++)
    {
        int a = i;
        for(int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for(int k = i; k <= n; k++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--)
    {
        int a = i;
        for(int j = i; j > 1; j--)
        {
            printf(" ");
        }
        for(int k = i; k <= n; k++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}