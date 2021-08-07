#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
     int a;
    double b;
    char string[100];
    
    scanf("%d",&a);
    scanf("%1f",&b);
    gets(string);
    int sum = i+a;
    printf("%d\n",sum);
    printf("%1.1f\n",d+b);
    printf("%s",string);

    return 0;
}