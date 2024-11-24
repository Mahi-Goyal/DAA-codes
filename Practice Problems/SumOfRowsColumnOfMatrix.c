#include<stdio.h>
int main()
{
    int row, column, a = 0;
    printf("enter the number of rows and columns for the matrix: ");
    scanf("%d", &row);
    scanf("%d", &column);
    int arr[row][column];
    printf("enter the values for the matrix: \n2 2");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter matrix is: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            a = a + arr[i][j];
        }
    }
    printf("sum of all the values in the matrix is: %d", a);
    return 0;
}