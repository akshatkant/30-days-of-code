#include <stdio.h>
#include <stdlib.h>
#define maxsize 100
int top=-1,item;
int s[maxsize];

void push()
{
    if (top == maxsize-1)
    {
        printf("Stack overflow\n");
        return;
    }

    top=top+1;
    s[top]=item;
}

int pop()
{
    int itemdeleted;
    if(top==-1)
    {
        printf("Stack Underflow\n");
        return 0;
    }

    itemdeleted=s[top--];
    return itemdeleted;
}

void display()
{
    if(top==-1)
    {
        printf("Stack underflow\n");

    }

    for(int i=0;i<=top;i++)
    {
        printf("%d",s[i]);
    }
}

void main()
{
    char ch;
    top=-1;
    while(1)
    {
        int itemdeleted;
        printf("\n1. Push\n 2. Pop\n 3. display\n 4. exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter items to push\n");
                     scanf("%d",&item);
                     push();
            break;

            case 2: itemdeleted = pop();
                    if(itemdeleted == 0)
                    {
                        printf("STACK UNDERFLOW");
                        
                    }
                    printf("Item deleted: %d",itemdeleted);
            break;

            case 3: display();
            break;

            case 4: exit(0);
            break;

            default: printf("Wrong Choice");
            break;
        }
    
    
    }
}