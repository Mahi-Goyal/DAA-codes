#include<stdio.h>
int main() 
{
    int n;
    printf("enter rows: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i <= n; i++)
    {
        int a = 1;
        for(int j = i; j < n; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2*i - 1; k++)
        {
            if(i == 1 | i == n | k == 1)
            {
                printf("%d", a);
                a++;
            }
            else if(k == 2*i - 1)
            {
                printf("%d", 2*i - 1);
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