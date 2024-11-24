#include<stdio.h>
int main()
{
    int n;
    printf("enter rows: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = n; i >= 1; i--)
    {
        int a = 1;
        for(int j = 1; j <= i; j++)
        {
           if(i == n | i == 1 | j == 1)
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