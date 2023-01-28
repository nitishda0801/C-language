#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int k=1;
void create()
{
    head=NULL;
    int ch=1;
    while(ch)
    {
       struct node *new,*temp;
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
            head=temp=new;
        else
        {
            temp->next=new;
            temp=new;
        }
        printf("Enter 1 for continue or 0 for exit:");
        scanf("%d",&ch);
    }
    printf("linked list created.\n\n");
}
void traversal()
{
        struct node* temp;
	if (head == NULL)
		printf("\nList is empty\n");
	else {
		temp=head;
        printf("Data: ");
		while (temp!=NULL)
        {
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
void insertatstart()
{
    int value;
    struct node *new;
    new=malloc(sizeof(struct node));
    printf("Enter the  data \n");
    scanf("%d",&value);
    new->data=value;
    new->next=head;
    head=new;
}
void insertatend()
{
    int value;
    struct node *temp,*new;
    new=malloc(sizeof(struct node));
    printf("Enter the value \n");
    scanf("%d",&value);
    new->next=NULL;
    new->data=value;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;

}
void insertatposition()
{
    struct node *temp, *newnode;
    int pos,value,i=1;
    newnode = malloc(sizeof(struct node));
    printf("Enter position\n");
    scanf("%d", &pos);
    printf("Enter enter value\n");
    scanf("%d", &value);
    temp=head;
    newnode->data=value;
    newnode->next =NULL;
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void deletefirst()
{
    struct node*temp;
    if (head==NULL)
        printf("\nList is empty\n");
    else {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void deletelast()
{
    struct node *temp, *prevnode;
    if (head==NULL)
        printf("\nList is Empty\n");
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            prevnode=temp;
            temp=temp->next;
        }
        free(temp);
        prevnode->next=NULL;
    }
}
void deleteposition()
{
    struct node *temp,*position;
    int i=1,pos;
    if (head==NULL)
        printf("\nList is empty\n");
    else
     {
        printf("\nEnter index:");
        scanf("%d",&pos);
        position=malloc(sizeof(struct node));
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        position=temp->next;
        temp->next=position->next;
        free(position);
    }
}
void reverselist()
{
    struct node *t1,*t2,*temp;
    t1=t2=NULL;
    if (head==NULL)
    printf("List is empty\n");
    else
    {
 
        while (head!=NULL)
        {
            t2=head->next;
            head->next=t1;
            t1=head;
            head=t2;
        }
        head=t1;
        temp=head;
        printf("Reversed linked list are\n");
        while (temp!=NULL) 
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int op;
    while(1)
    {
        printf("\n\n1.create\n");
        printf("2.traversal\n");
        printf("3.insert_at_start\n");
        printf("4.insert_at_end\n");
        printf("5.insert_at_position\n");
        printf("6.deleting_first\n");
        printf("7.deleting_last_node\n");
        printf("8.deleting_position\n");
        printf("9.reverse\n");
        printf("10.exit\n");
        printf("\nchoose any option:\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:create();
                    break;
            case 2:traversal();
                    break;
            case 3:insertatstart();
                    break;
            case 4:insertatend();
                    break;
            case 5:insertatposition();
                    break;
            case 6:deletefirst();
                    break;
            case 7:deletelast();
                    break;
            case 8:deleteposition();
                    break;
            case 9:reverselist();
                    break;
            case 10:printf("Thank You...");
                    break;
            default:printf("Enter wrong option");

        }
    }

}