#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int q[MAX];
int front=0;
int rear=-1;
int item;
void insert()
{
    if(rear==MAX-1) //if the rear fills then no place to inset
    {
        printf("Queue Overflow\n");
        return;
    }
    rear=rear+1;  //first increment rear
    q[rear]=item; //insert item to rear
    
}

int delete()
{
    if(front>rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    int itemdeleted = q[front]; //first delete item from front
    front=front+1;             //then increment front
}

void display()
{
    if(front>rear)
    {
        printf("Queue Underflow \n");
        return;

    }
    for(int i=front;i<=rear;i++) //print elements from front to rear
    {
        printf("%d\n",q[i]);
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