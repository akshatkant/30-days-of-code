#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    char name[100][100];
    int number;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter %d values\n",n);
    for(int i=0;i<n;i++)
    {
        
      // scanf("%[^\n]",&name);
        //scanf("%s",name[i]);
         scanf(" %99[^\n]",name[i]);
    

    } 

     for(int i=0;i<n;i++)
    {
        
      // scanf("%[^\n]",&name);
        //getline(name);
        printf("%s\n",name[i]);
        
        
    } 
  
}