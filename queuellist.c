#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *front=0;
struct node *rear=0;

void enqueue()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=0;

    if(front==0 && rear==0)
    {
        front=newnode;
        rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }

}

void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("Empty");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}

void dequeue()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("Empty");
    }
    else
    {
        temp=front;
        printf("The deleted item is %d",front->data);
        front=front->next;
        free(temp);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
        }

    }
}
