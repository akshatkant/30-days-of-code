#include <stdio.h>
#include <stdlib.h>
#define max 100
int q[max];
int front=-1;
int rear=-1;
int item,i;

void insert()
{
    if(front==-1 && rear == -1)
    {
        front=rear=0;
        q[rear]=item;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue overflow\n");
    }
    else{
    rear=(rear+1)%max;
    q[rear]=item;
    }
}

int delete()
{
    int itemdeleted;
    if(front==-1 && rear==-1)
    {
        printf("Queue empty");
    }
    else if(rear==front)
    {
        printf("dequed element is: %d",q[front]);
    }
    else
    {
        itemdeleted=q[front];
        front=(front+1)%max;
        return itemdeleted;
    }

}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue empty");
    }
    while(i!=rear)
    {
        printf("%d",q[i]);
        i=(i+1)%max;
    }
    printf("%d",q[rear]);
}

int main()
{
    while(1)
    {
    int choice,itemdeleted;
    printf("Enter your choice\n");
    printf("Choose\n 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:  printf("Enter items to insert\n");
                scanf("%d",&item);
                insert();
                break;
        case 2: itemdeleted=delete();
                printf("dequed element is %d",itemdeleted);

                break;
        case 3: display();
        break;
        case 4: exit(0);
        break;

    }
    }

}