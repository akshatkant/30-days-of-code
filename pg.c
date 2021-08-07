#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define NUMBER_OF_STRING 9
#define MAX_STRING_SIZE 9



int main() 
{
    int a, b;

     char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"one" ,"two" ,"three","four"
                                                    ,"five","six","seven",
                                                      "eight","nine"
                                                   };
    scanf("%d\n%d", &a, &b);
    for(int i=a;i<=b;i++)
    {
  	 if(a<=9||b<=9)
      printf("%s\n%s\n",arr[i-1],arr[i-1]);
     else if (a>9 && a%2==0 || b>9 && b%2==0 ) 
     {
        printf("even");
     }
     else {
     printf("odd");
     }
      printf("%d\n",i);

    }
return 0;
}
