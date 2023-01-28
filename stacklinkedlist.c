#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*ptr,*temp,*new;
void create()
{
    int ch=1; 
    while(ch)
    {
    new=malloc(sizeof(struct node));
    printf("\nEnter data to stack\n");
    scanf("%d",&new->data);
    head=NULL;
    new->next=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
        temp->next=new;
        temp=new;
        }
        printf("\n for continue press 1 else 0\n");
        scanf("%d",&ch);

    }
    printf("\nstack created successfully\n");
}
void display()
{
    temp=head;
    if(head==NULL)
    {
            printf("\nstack is empty\n");
            printf("\n please fill the data to stack\n");
    }
    else{
        
        printf("\nstack element are: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
             temp=temp->next;
        }
    }
    printf("\n stack display sucessfully\n");
}
void push()
{
    if(head==NULL)
    {
        printf("\nstack is empty\n");
    }
    else{
        temp=head;
        ptr=malloc(sizeof(struct node));
        printf("\n Enter data\n");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        while(temp->next!=NULL)
        {
           temp= temp->next;
        }
        temp->next=ptr;
    }
    printf("\npush operation done successfully\n");
}
void pop()
{
    struct node *del;
    temp=head;
    if(head==NULL)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            del=temp;
            temp=temp->next;
        }
        free(temp);
        del->next=NULL;
    }
    printf("\npop operation done successfully\n");
}
int main()
{
    int op;
    while(1)
    {
        printf("\n1.create stack\n");
        printf("\n2.display stack\n");
        printf("\n3.add stack element(push operation)\n");
        printf("\n4.delete stack element(pop operation)\n");
        printf("\nchoose option else press 0 for exit :\n");
        scanf("%d",&op);
        switch(op)
        {
            case 0:printf("\nThanks you,we will meet soon...\n");
            break;
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:push();
            break;
            case 4:pop();
            break;
            default:printf("\nOhh,sorry you entered wrong choice\n");
            break;
        }
    }
        return 0;
}