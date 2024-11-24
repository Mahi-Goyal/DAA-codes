#include<stdio.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter values: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("entered array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nreversed array is: \n");
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}