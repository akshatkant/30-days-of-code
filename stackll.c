#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct  node *top=0,*newnode;
typedef struct node node;

void push()
{
    int x;
    printf("Enter data");
    scanf("%d",&x); //data from newnode->data and adress in  newnode->next.
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;

}

void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("No elements left");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("Empty");
    }
    else
    {
        printf("The deleted item is %d",temp->data);
        top=top->next; //or can also do top=temp->next as top and temp both pointing to same element.
        free(temp);
    }
}

int main()
{
    int ch;
    top=0;
    while(1)
    {
        printf("\n1. push\n 2. pop\n 3. display\n 4. Exit\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
        }

    }
    return 0;
}