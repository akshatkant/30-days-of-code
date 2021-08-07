#include <stdio.h>

void printArray(int A[] , int n){
    for(int i=0;i<n;i++)
    {
      printf("%d ",A[i]);
    }
    printf("\n");
}
void bubblesort(int A[] , int n)
{
    int temp;
    for(int i=0 ; i<n-1 ;i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }

        }
    } 
}
//not needed arraysum just did on my own
void arraySum (int A[], int n){
    int s=0;
    for(int i=0;i<n;i++)
    {

        s=s+A[i];

    }
     printf("%d",s);
}
int main(){
    int A[] = {12,54,65,7,23,9};
    int n=6;
    printArray(A,n);
    bubblesort(A,n);
    printArray(A,n);
    arraySum(A,n);
    return 0;
}