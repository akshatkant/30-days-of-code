#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int top = -1;
char string[MAX];

void push(char item)
{

    if (top == MAX - 1)
    {
        return 0;
    }
    else
    {
        top = top + 1;
        string[top] = item; //push elements to item
    }
}

char pop()
{
    char item;
    if (top == -1)
    {
        return 0;
    }
    else
    {
        item = string[top]; //pop elements and store to item
        top = top - 1;
        return item;
    }
}

int main()
{
    char str[MAX],str2[MAX];
    int len,count=0,i;

    printf("Enter a string\n");
    scanf("%s",str);
    strcpy(str2,str);   //copying contents of str to str2 as str will be changed
    len=strlen(str);
    for(i=0;i<len;i++)  //the loop runs till the length of input string
    {
        push(str[i]); //push the elemnts of string to stack
    }
    for(i=0;i<len;i++)
    {
        str[i]=pop(); //pop the elements of string from stack
    }
    printf("Reversed string is %s\n",str); //we get new str
    
    /*if(strcmp(str,str2)==0) //compare str2 havinng value of previous str with new str 
    {
        printf("YES, ITS A PALINDROME"); //matches
    }
    else
    {
        printf("NO, ITS NOT A PALINDROME"); //not matches

    }*/
  
}