//DOUBT
#include<stdio.h>
int main()
{
    int i, s, k, n, c;
    printf("enter rows: ");
    scanf("%d", &n);
    printf("\n");
    for(i = 1; i <= n; i++)
    {
        for(s = i; s < n; s++)
        {
            printf(" ");
        }
        for(k = 1; k <= i; k++)
        {
            if(i == 1 | k == 1 | k == i)
            {
                c = 1;
            }
            else
            {c = c * (i - k + 1);}
            printf("%d", c);
        }
        printf("\n");
    }
    return 0;
}