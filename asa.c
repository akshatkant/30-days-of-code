#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s;
    printf("Enter a string\n");
    scanf("%[^\n]s",&s);
    printf("%s",s);
}