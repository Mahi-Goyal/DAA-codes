#include<stdio.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n-1 ; i++)
    {
        int m = i;

        for ( int j = i + 1; j < n; j++)
        { 
            if( arr[j] < arr[m])
            {
                m = j;
            }
        }
        int c;
        c = arr[m];
        arr[m] = arr[i];
        arr[i] = c;
    }
    printf("3 largest distinct elements are: \n");
    for(int i = n-1 ; i >= n-3 ; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}