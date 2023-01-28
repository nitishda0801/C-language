#include<stdio.h>
#include<stdlib.h>
int queue[10];
int front=-1;
int rear=-1;
void create()
{
    int op;
    while(op)
    {
        int item;
        printf("\nEnter the data to queue\n");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=item;
        printf("\n for continue press 1 else 0:\n");
        scanf("%d",&op);
    }
}
void display()
{
        int i;
        if(front==-1)
        printf("\nQueue is empty\n");
        else{
        printf("\nQueue are : ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        }
        printf("\n\n");
}
void insert()
{
    if((rear+1)==9)
    {
        printf("\nOverflow\n");
    }
    else{
        rear=rear+1;
        int a;
        printf("\nEnter the data\n");
        scanf("%d",&a);
        queue[rear]=a;

    }
}
void delete()
{
    int d;
    if(front>=rear)
    {
        printf("\nUnderflow\n");
    }
    else{
        d=queue[front];
        if(front==rear)
        {
            front=rear=-1;
        }
        else{
            front=front+1;
        }
        printf("\nDeleted item :%d\n",d);
        //free(d);
    }
}
int main()
{
    int op;
    while(1)
    {
        printf("Enter choice:1.create:2.display:3.insert:4.delete:5.exit\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:create();
                break;
            case 2:display();
                    break;
            case 3:insert();
                    break;
            case 4:delete();
                    break;
            case 5:printf("\nThank you we will meet soon...\n");
            break;
            default :printf("ohh!, youb entere wrong option\n");
        }
    }
    
    return 0;
}