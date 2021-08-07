#include <stdio.h>

int main()

{
    int a,n,i;
    int arr[n];
   // int arr[]={1,4,3,2};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}