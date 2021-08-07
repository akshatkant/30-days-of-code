#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*newnode;
typedef struct node node;
node *getnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    return newnode;
}

void insert_beg()
{
    node *n;
    n=getnode();

    if(head==0)
    {
        head=n;
    }
    else
    {
        n->next=head;
        head=n;
    }

}

void insert_end()
{
    node *n,*temp=head;
    n=getnode();

    if(head==0)
    {
        head=n;
    }
    else
    {
        while(temp->next!=0)
        {
            temp=temp->next;
        }

        temp->next=n;
    }

}

void del_beg()
{
    node *temp=head;

    if(head==0)
    {
        printf("List is empty");
    }

    else
    {
        head=head->next;
        printf("The deleted item is %d",temp->data);
        free(temp);
    }

}

void del_end()
{
    node *prevnode,*temp=head;

    if(head==0)
    {
        printf("List is empty\n");
    }
    
    while(temp->next!=0)
        {
            prevnode=temp;
            temp=temp->next;
        }

    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else
    {
        prevnode->next=0;
        free(temp);
    }

}

void display()
{
    node *n,*temp=head;
    if(head==0)
    {
        printf("No elemnents to display");
    }
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}

int main()
{
    int ch;
    head=0;
    while(1)
    {
        printf("\n1. Insert beginning\n 2. Insert end\n 3. Delete beginning\n 4. Delete end\n 5. display\n 6. Exit\n ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_beg();
            break;
            case 2: insert_end();
            break;
            case 3: del_beg();
            break;
            case 4: del_end();
            break;
            case 5: display();
            break;
            case 6: exit(0);
            break;
        }

    }
    return 0;
}