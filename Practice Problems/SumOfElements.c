#include<stdio.h>
int sum(int arr[], int n)
{
   if(n == 0)
   {
    return 0;
   }
   else
   {
    return arr[n-1] + sum(arr, n-1);
   }
}
int main()
{
    int n;
    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements of array");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum of all elements of array is: %d", sum(arr, n));
    return 0;
}