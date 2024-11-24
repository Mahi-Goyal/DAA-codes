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
        for(int j = 1; j <= i; j++)
        {
            if(i == 1 | i == n | j == 1)
            {
                printf("%d", a);
                a++;
            }
            else if(j == i)
            {
                printf("%d", i);
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