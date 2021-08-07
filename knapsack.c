//***********bRUTE FORCE mETHOD**********?///
//https://www.youtube.com/watch?v=ywiH-zRH1mA
#include <stdio.h>
#include <stdlib.h>

int max(int a , int b)
{
    if(a>b)
    {
        return a;
    }
    else 
    {
        return b;
    }
    
    
}
//C capacity of knapsack
//n number of elements
//w[] weight of elements;
//val[] value of elements

int knapsack(int C, int n, int w[], int val[])
{
    if (n==0 || C==0)           //no element or capacity left or equal to 0 
    {
        return 0;
    }

    if(w[n-1]>C)                //weight of last element greater than the capacity
    {
        return knapsack(C,n-1,w,val); //return knapsack ny removing that element as you can see n-1
    }

    else
    {
        return max(val[n-1] + knapsack(C-w[n-1],n-1,w,val),knapsack(C,n-1,w,val)); 
    /* two cases one by including the last element where we add val[n-1] and another by removing the last element where the capacity 
    remains same.in first knapsack the weight of last element is substracted from knapsack capacity and the number of elements reduced by 1
    whereas in the second case only the elemnts is reduced  by 1 as we dont include the last element */                                                                                                                                                                     

    }

}

int main()
{
    int val[] = { 60,100,120 };
    int w[] = { 10 , 20 ,30 };
    int C = 50;
    int n = sizeof(val)/sizeof(val[0]); //to get size of array we divide the whole array with one element of array
    printf("%d", knapsack(C,n,w,val));
    return 0;
} 



//***********DYNAMIC PROGRAMMING*********//

int max(int a, int b)
{
    return (a > b) ? a : b;
}
 
// Returns the maximum value that
// can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];
 
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1]
                          + K[i - 1][w - wt[i - 1]],
                          K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
 
    return K[n][W];
}
 
// Driver Code
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}