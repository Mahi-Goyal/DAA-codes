#include<stdio.h>
int distinct(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int a = 1;
       for(int j = 0; j < i; j++)
       {
        if(arr[i] == arr[j])
        {
            a = 0;
            break;
        }
       }

       if(a == 1)
       {
        printf("%d ", arr[i]);
       }
    }
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("distinct elements of the entered array are: ");
    distinct(arr, n);
    return 0;
}