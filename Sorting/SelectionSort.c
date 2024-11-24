#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d values for the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for ( int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for ( int j = i + 1; j < n; j++)
        { 
            if( arr[j] < arr[minIndex])
            {
                minIndex = j;
            }      
        }
        int c;
        c = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = c;
    }
    printf("Sorted array is: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;

}