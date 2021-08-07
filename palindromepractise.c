#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 100
int top=-1,item;
char s[max];

void push(int item)
{
    if(top==max-1)
    {
        printf("Stack Overflow\n");

    }
    else
    {
        top=top+1;
        s[top]=item;
    }
}

int pop()
{
    int itemdeleted;
    if(top==-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        itemdeleted=s[top--];
        return itemdeleted;

    }

}

int main()
{
    char str[max],str2[max];
    int len;
    printf("Enter the string\n");
    scanf("%s",str);
    strcpy(str2,str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        push(str[i]);

    }
    for(int i=0;i<len;i++)
    {
        str[i]=pop();
    }
    printf("The reversed string is: %s ",str);

    if(strcmp(str,str2)==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not a palindrome");

    }
}