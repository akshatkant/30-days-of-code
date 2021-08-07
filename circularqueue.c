//https://www.youtube.com/watch?v=dn01XST9-bI&t=850s
#include <stdio.h>

#include <stdlib.h>

#define max 5

int q[max];

int rear = -1;

int front = -1;


int item;

void insert()

{
    if(front==-1 && rear==-1)
    {
       front=rear=0; //intialize them to 0
       q[rear]=item; //insert the element
    }
    else if((rear+1)%max == front)
    {
         printf("Queue full");
        
    }
    else
    {
        rear=(rear+1)%max; //this is how you do rear++ in a circular queue
        q[rear]=item; //insert the element

    }

}

int delete()

{
    if(front==-1 && rear==-1)
    {
        printf("Queue Empty");
    }
    else if (rear==front)
    {
        printf("The dequed element is: %d",q[front]); //while deleting the last element
        front=rear=-1; //set both to -1
  
    }
    else
    {
        printf("The dequed element is: %d",q[front]); //delete
        front=(front+1)%max; //increment front
        
    }

   
}

void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue is\n");
        while(i!=rear)
        {
            printf("%d",q[i]);
            i = ( i + 1 ) % max;


        }
        printf("%d",q[rear]); //due to above while condition
                              //the last element couldnt be printed so 
                              //we print it seperately 

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
        case 2: delete();
                break;
        case 3: display();
        break;
        case 4: exit(0);
        break;

    }
    }

}