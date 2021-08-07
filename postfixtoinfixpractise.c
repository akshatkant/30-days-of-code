#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double compute ( char symbol , double op1 , double op2)
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
    char postfix[20],infix[20];
    int top=-1;
    char symbol;
    int res;
    double s[30],op1,op2;
    
    printf("Enter postfix expression\n");
    scanf("%s",&postfix);

    for(int i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            s[++top]=symbol-'0';
            continue;
        }
        else
        {
            op2=s[top--];
            op1=s[top--];
        }

        res=compute(symbol,op1,op2);
        s[++top]=res;
    
    }

        res=s[top--];
        printf("The value of expression is %d",res);

}