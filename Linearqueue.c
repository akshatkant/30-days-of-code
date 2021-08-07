#include <stdio.h>
#include <stdlib.h>
#define max 100
int front=0;
int rear=-1;
int item,s[max];
void insert()
{
    if(rear==max-1)
    {
        printf("Queue full\n");
    }
    else
    {
        rear=rear+1;
        s[rear]=item;
    }
}

int delete()
{
    int itemdeleted;
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        itemdeleted=s[front];
        front=front+1;
        return itemdeleted;


    }
}

void display()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",s[i]);

        }
    }
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
                printf("The deleted item is %d\n",itemdeleted);
                 
                break;
        case 3: display();
        break;
        case 4: exit(0);
        break;

    }
    }

}