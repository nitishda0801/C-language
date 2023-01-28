#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*temp,*new;
    int n;
    printf("enter no of element in list\n");
    scanf("%d",&n);
    head=NULL;
    while(n--)
    {
        new=malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&new->next);
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
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}