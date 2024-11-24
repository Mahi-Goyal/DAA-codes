#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("input the elements of array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n ; i++)
    {
        int index = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[index] > arr[j])
            {
                int c;
                c = arr[index];
                arr[index] = arr[j];
                arr[j] = c;
            }
        }
    }
    printf("sorted array is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}