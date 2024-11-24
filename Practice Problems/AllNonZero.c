#include<stdio.h>
int main()
{
    int row, column, count = 0;
    printf("enter rows and columns: ");
    scanf("%d%d", &row, &column);
    int arr[row][column];
    printf("enter elements: ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("entered 2D array is: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(arr[i][j] != 0)
            {
                count++;
            }
        }
    }
     printf("number of non-zero elements in the 2D array is: %d", count);
     return 0;
}