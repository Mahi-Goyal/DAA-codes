#include<stdio.h>
int main()
{
    int n, j;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("input the values of array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        for(j = i-1; j >= 0; j--)
        {
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = key;
    }
    printf("sorted array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}