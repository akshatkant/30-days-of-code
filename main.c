#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(int i=sizeof(arr)/sizeof(arr[0])-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}