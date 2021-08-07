#include <stdio.h>
#include <stdlib.h>

#define max 3

int q[max],front=0,rear=-1;

void insert_by_p()
{
    if(rear==max-1)
    {
        printf("overflow\n");return;
    }
    printf("please enter the element\n");

    int a;

    scanf("%d",&a);
    check(a);
    rear++;
}

void check(int a)
{
    int i,j;

    for(i=front;i<=rear;i++)
    {
        if(a<=q[i])
        {
            for(j=rear+1;j>i;j--)
                q[j]=q[j-1];
            q[i]=a;
            return;
        }
    }
    q[i]=a;
}

void display()
{
    if(rear==-1||front>rear)
    {
        printf("underflow\n");return;
    }
    printf("Q items:");
    for(int i=front;i<=rear;i++)
    {
        printf("%d,",q[i]);
    }
    printf("\n");
}

void delete_by_p()
{
    if(rear==-1||front>rear)
    {
        printf("underflow\n");return;
    }
    printf("the deleted element is %d\n",q[front++]);
}

int main()
{
    int a;

    while(1)
    {
        printf("please choose one option:\n1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1: insert_by_p();
            break;
            case 2: delete_by_p();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default:printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}