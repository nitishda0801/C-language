#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
/*void reverseprint()
{
        struct node* temp,*last;
	if (head == NULL)
		printf("\nList is empty\n");
	else {
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        printf("Reverse DLL :\n");
		while(temp!=NULL)
        {
			printf("Data = %d\n",temp->data);
			temp=temp->prev;
		}
	}
}*/
void create()
{
    int op=1;
    struct node *ptr,*temp;
    while(op==1)
    {
        ptr =(struct node *)malloc((sizeof(struct node)));
        printf("Enter data part\n");
        int val;
        scanf("%d",&val);
        ptr->data=val;
        ptr->next=NULL;
        ptr->prev=NULL;
        if(head==NULL)
        {
            head=temp=ptr;
        }
        else{
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
            temp=ptr;
        }
        printf("for another element press 1 \n else 0\n");
        scanf("%d",&op);
    }
        printf("DLL created\n");

}
void traversal()
{
        struct node* temp;
	if (head == NULL)
		printf("\nList is empty\n");
	else {
		temp = head;
        printf("List is: ");
		while (temp != NULL) 
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
    new->next=NULL;
    new->prev=NULL;
     if(head==NULL)
    printf("list is empty\n");
    else
    {
        head->prev=new;
        new->next=head;
        head=new;
    }
    printf("DLL inserted at start\n");
}
void insertatend()
{
    int value;
    struct node *temp,*new;
    new=malloc(sizeof(struct node));
     new->next=NULL;
    new->prev=NULL;
    printf("Enter the value \n");
    scanf("%d",&value);
    new->data=value;
    temp=head;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
    while(temp->next!=NULL)
        temp=temp->next;

        new->prev=temp;
         temp->next=new;
    }
    printf("DLL inserted at end\n");
}
void insertatposition()
{
    struct node *temp, *newnode;
    int pos,value,i=1;
    newnode = malloc(sizeof(struct node));
    printf("Enter position\n");
    scanf("%d", &pos);
    newnode->next =NULL;
     newnode->prev=NULL;
     if(head==NULL)
     {
         head=newnode;
         newnode->prev=NULL;
         newnode->next=NULL;
     }
    else
    if(pos==1)
    {
        insertatstart();
    }
    else
    {
       printf("Enter value\n");
        scanf("%d", &value);
        temp=head;
        newnode->data=value;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
    printf("DLL inserted at position\n");
}
void deletefirst()
{
    struct node*temp;
    if (head==NULL)
        printf("\nList is empty\n");
    else {
        temp=head;
        head=head->next;
        if(head!=NULL)
        head->prev=NULL;
        free(temp);
    }
    printf("first node deleted\n");
}
void deletelast()
{
    struct node *temp;
    if (head==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
            temp=head;
            while(temp->next!=NULL) 
            {
                temp=temp->next;
            }
            if(head->next==NULL)
            head=NULL;
            else
            {
                temp->prev->next=NULL;
                free(temp);
            }
    }
        printf("last node deleted\n");
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
        if(pos==1)
        {
            deletefirst();
       
        free(position);
        //return;
        }
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        position=temp->next;
        if(position->next!=NULL)
        position->next->prev=temp;
        temp->next=position->next;
        free(position);
    }
    printf("position node deleted\n");
}
void search()
{
     struct node * temp;
    int key,c;
    printf("\nEnter element to search :");
    scanf("%d",&key);
	if (head == NULL)
		printf("\nList is empty\n");
	else {
		temp = head;
		while (temp != NULL) 
        {
			if(key==temp->data)
            {
                c=1;
                break;
            }
			temp=temp->next;

		}
	}
    if(c==1)
    {
        printf("Key element found\n");
    }
    else
    printf("Key element not found\n");
}

int main()
{
    int op;
    while(1)
    {
       
        printf("1.create\n");
         printf("2.Traversing\n");
        printf("3.Insert at start\n");
        printf("4.Insert at end\n");
        printf("5.Insert at position\n");
        printf("6.Deleting first node\n");
        printf("7.Deleting last node\n");
        printf("8.deleting particular node\n");
        printf("9.Search the element\n");
        printf("0.for exit press\n");
        printf("choose any option:\n");
        scanf("%d",&op);
        switch(op)
        {
            case 0:exit(1);
                    break;
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
            case 9:search();
                    break;
            default:printf("Enter wrong option");

        }
    }

}