#include<stdio.h>
int main()
{
    int n, SearchFor, flag, a;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter values for array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number you need to search for: ");
    scanf("%d", &SearchFor);
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == SearchFor)
        {
            flag = 1;
            a = i;
        }
    }
    if(flag == 1)
    {
        printf("search was successful and %d was found at %d index of the entered array", SearchFor, a);
    }
    else
    {
        printf("search was unsuccessful");
    }
    return 0;
}