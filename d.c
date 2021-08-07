#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[],int n)
{
    int j,i,min,temp;
    //int a[j],a[min];
    //int a[10]= {1,20,4,56,78,96,2,4,5,6};
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }

        if(min!=j)
        
        {
         temp = a[i];
         a[i] = a[min];
         a[min] = temp;
        }   

        
        /*if (min!=i)
        {
            
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
  
            
        }*/

    }

}

int main()
{
    int n=10,i;
    int a[10]= {1,20,4,56,78,96,2,3,5,6};
    printf("Before sorting\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);

     }

    selectionSort(a,n);
    printf("\nAfter sorting\n");
     for(i=0;i<n;i++)
     {
         
         printf("%d\t",a[i]);
     
     }
     return 0;
    
}