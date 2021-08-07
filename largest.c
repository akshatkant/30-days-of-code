
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void arraySum (int A[], int n){
    int s=0;
    for(int i=0;i<n;i++)
    {

        s=s+A[i];

    }
     printf("%d",s);
}
int main()
{
    int n,i;
    int a[n];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        
     }
arraySum(a,n);

     /*for(i=0;i<n;i++)
     {

     s = s + a[i];

     }
     printf("%d",s);*/
     
    return 0;
}