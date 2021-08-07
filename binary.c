#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define NUMBER_OF_STRING 9
#define MAX_STRING_SIZE 9

int main()
{
    int a,b;
     char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"one" ,"two" ,"three","four"
                                                    ,"five","six","seven",
                                                      "eight","nine"
                                                   };
    scanf("%d\n%d", &a, &b);
    for(int i=a;i<=b;i++)
    {
        if (i<=9)
        printf("%s\n",arr[i-1]);
        else if(i>9 && i%2==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");

        }

    }
}