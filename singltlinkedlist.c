//https://www.youtube.com/watch?v=6wXZ_m3SbEs&t=812s
//https://www.youtube.com/watch?v=dq3F3e9o2DM&t=949s
//https://www.youtube.com/watch?v=ClvYytk5Rlg&t=950s
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct node //we are making our own datatype
{
    int data;
    struct node *next; //struct node is a datatype just as int
};

struct node *head=0, *newnode; //pointer decleration and head initialized to 0 initially
                                //*newnode carries the address of the newly created node or points to the new node.

//head=0;
typedef struct node node; //changing the name struct node to just node.
node *getnode()
{           // typecasting to struct node datatype
newnode=(struct node*)malloc(sizeof(struct node)); //allocating memory to the size of struct node.
printf("Enter data");
scanf("%d",&newnode->data); //data from newnode->data and adress in  newnode->next.
newnode->next=0; //address is initialised to 0 as default of a newly created node
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
        n->next=head;// here n denotes newnode. address of previous first node after head, is stored in head
                     //so we do this to take that address and store in our new first node after head
        head=n;  //and adress of this new node to head.

     }
}

void insert_end()
{
    node *n,*temp=head; //new pointer variable temp is assigned as head.
    n=getnode();
    if(head==0)
    {
        head=n;
    }
    else
    {
        while(temp->next!=0)//traversing temp till it reaches the last node with address 0(or temp->next=0)
        {
            temp=temp->next;
        }

        temp->next=n; //once it reaches the last node simply insert the address of newnode to the last node.
        //n=temp;
    }

}

void del_beg()
{
    node *temp=head; //new pointer variable temp is assigned head.
    if(head==NULL)
    {
        printf("The linked list is empty\n");

    }
    else
    {
       // temp=head;
        head=head->next; //the head->next is the address part of first element after head which contains address of second element
        printf("The deleted element is: %d",temp->data); //temp contains the address of previously first element
        free(temp); //temp should be freed in order to delete
    }
}

void del_end()
{
    node *prevnode,*temp=head; //new pointer prevnode which points to the previously temp element

    if(head==0)
    {
        printf("Linked list is empty\n");
        return;
    }

    
    while(temp->next!=0)
    {
        prevnode=temp; //so that prevnode points to pevious element which was temp while temp increments to next element
        temp=temp->next;

    }

    if(temp==head) //if no elements in linked list instead of head
    {
        head=0; 
        free(temp);
    }
    else
    {
        prevnode->next=0; //the address part of element to which prevnode points to is set to null 
        free(temp); //and temp is freed or last element is deleted
    }
}

void display()
{
    node *temp;

    if(head==0)
    {
        printf("Nothing to display");
    }
    
    temp=head; //temp initially set to 0
    while(temp->next!=0) 
    {
        printf("%d",temp->data); //printing elements of linked list
        temp=temp->next; //increment
    }
    printf("%d",temp->data); //last element of linked list is printed seperately as it coulnt in the while loop.
    
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