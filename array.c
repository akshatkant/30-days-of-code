#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_STRING 9
#define MAX_STRING_SIZE 9
int main()
{
    int i;
    char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"one" ,"two" ,"three","four"
                                                    ,"five","six","seven",
                                                      "eight","nine"
                                                   };
    printf("Enter a digit\n");
    scanf("%d",&i);
    //for(int i=0;i<NUMBER_OF_STRING;i++)
     if(i<=9)
     {
        printf("%s",arr[i-1]);
     }
    
    else
    {
        printf("Greater than 9\n");
    }
    
    
}



