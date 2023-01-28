#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node * next;
    };
    struct node *head,*second,*third;
   head =malloc(sizeof(struct node));
    second =malloc(sizeof(struct node));
    third=malloc(sizeof(struct node));
    head->data=10;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=12;
    third->next=NULL;
    struct node *temp=head;
    printf("travresal of linked list are\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

  third->next=second;
  second->next=head;
  head->next=NULL;
   struct node *ptr=third;
   printf("reverse linked list are:\n");
  while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}