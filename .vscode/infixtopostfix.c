#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int F(char symbol)
{
    switch(symbol)
    {
        case  '+':
        case '-': return 2;
        case '*':
        case '/':return 4;
        case '^': 
        case '$':return 5;
        case '(':return 0;
        case '#': return -1;
        deafult: return 8;
    }
    
    
}

int G(char symbol)
{
    switch(symbol)
    {
        case  '+':
        case '-': return 1;
        case '*':
        case '/':return 3;
        case '^': 
        case '$':return 6;
        case '(':return 9;
        case ')': return 0;
        deafult: return 7;
    }

    
}

void infixtopostfix(char infix[] , char postfix[])
{
    int top,i,j=0;
    top=-1;
    char s[30],symbol; 
    s[++top] = '#';   //We push # to the stack first
    for(int i=0;i<strlen(infix);i++)    //this for loop runs till the whole infix expression is covered hence strlen(infix) is used
    {
        symbol = infix[i];  // all the elements starting from i=0 in infix expression is assigned as a symbol;
        while( F(s[top]) > G(symbol)) // if the precedence of the element in top of stack is greater than the symbol then 
        {
        postfix[j] = s[top--];  // pop item from stack and assign to postfix[j] (means postfix having j symbol)
        j++; //increment j
        }

    

    if(F(s[top]) !=  G(symbol)) // if the precedence not equal than the symbol
    {
        s[++top] = symbol;  //push symbol to the stack
    }
    else
    {
        top--; //else pop an element from the stack
    }
    }

    while( s[top]!='#')  //if the top element is not the first element that we push to the stack then 
    {

      postfix[j++] = s[top--]; //pop every element and put it in ostfix expression


    }

    postfix[j]='\0'; //next line character
}
 int main()
 {
     char infix[20], postfix[20];
     printf("Enter the infix expression\n");
     scanf("%s",&infix);
     infixtopostfix(infix,postfix);
     printf("%s",postfix);
     return 0;
 }



    


    
