#include<stdio.h>
void Move(int arr[], int n)
{
    int a = 0;
    for(int i = 0; i < n; i ++)
    {
        if(arr[i] != 0)
        {
            arr[a] = arr[i];
            a++;
        }
    }
    while(a < n)
    {
        arr[a] = 0;
        a++;
    }
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    Move(arr, n);

    printf("array after moving all the zeroes to the end: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}