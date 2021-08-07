#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double compute (char symbol,double op1,double op2)
{
    switch(symbol)

    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':return pow(op1,op2);
    }

}

void main()
{
    int top,i;
    double s[20] ,res,op1,op2;
    char symbol,postfix[20];
    printf("Enter postfix expression\n");
    scanf("%s",postfix);
    top=-1;
    for(i=0;i<strlen(postfix);i++)      //traverse the postfix expression
    {
        symbol=postfix[i];     //every element of postfix expression assigned to symbol
        if(isdigit(symbol))   //checking if symbol is an operand
        {
            s[++top]=symbol-'0';
            continue;
        }
        else                  //if it a operator
        {
            op2=s[top--];     //we push the topmost element of stack in op2
            op1=s[top--];     // and then the topmost element (after op2 is assigned) to op1 
        }

        res=compute(symbol,op1,op2);
        s[++top]=res;           //we push the result into stack
    }

    res=s[top--];     //after all elements end of postfix expression we pop the result and assign to res
    printf("The value of expression is %f",res);

}
