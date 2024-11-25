#include<stdio.h>
int main()
{
    float weight[50], profit[50], ratio[50], temp, capacity, TotalProfit = 0;
    int i, j, n;

    printf("enter number of objects: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("enter weight and profit: ");
        scanf("%f %f", &weight[i], &profit[i]);
    }  
    printf("enter the capacity of the knapsack: ");
    scanf("%f", &capacity);

    for(i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    //arrange the objects in descending order of their profit by weight ratio so the the objects with maximum profit can be selected into the knapsack
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                ratio[i] = temp;
                ratio[j] = ratio[i];
                temp = ratio[j];

                weight[i] = temp;
                weight[j] = weight[i];
                temp = weight[j];

                profit[i] = temp;
                profit[j] = profit[i];
                temp = profit[j];
            }
        }
    }

    //select the objects for knapsack
    for(i = 0; i < n; i++)
    {
        if(weight[i] > capacity)
        {
            break;
        }
        else
        {
            TotalProfit = TotalProfit + profit[i];
            capacity = capacity - weight[i];
        }
    }
    
    if(i < n)
    {
        TotalProfit = TotalProfit + (ratio[i] * capacity);
    }

    printf("%f", TotalProfit);
    return 0;
    
}