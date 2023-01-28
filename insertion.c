#include<stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node *next;
    };
    void linkedlisttraversal(struct node *ptr)
    {
        while(ptr!=NULL)
        {
            printf("Element :%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
    struct node * insertatfirst(struct node *head,int data)
    {
        struct node * ptr=(struct node *) malloc(sizeof(struct node));
        ptr->next=head;
        ptr->data=data;
        return ptr;
    }
    struct node * insertatend(struct node *head,int data)
    {
        struct node * ptr=(struct node *) malloc(sizeof(struct node));
        //ptr->next=head;
        ptr->data=data;
        struct node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=ptr;
        ptr->next=NULL;
        return head;
    }
int main()
{
    struct node * head;
     struct node * second;
      struct node * third;
      //allocate memory for the nodes in the linked list in heap
    head=(struct node *) malloc(sizeof(struct node));
    second=(struct node *) malloc(sizeof(struct node));
    third=(struct node *) malloc(sizeof(struct node));
    //link firs node
    head->data=8;
    head->next=second;
    second->data=9;
    second->next=third;
    third->data=10;
    third->next=NULL;
    printf("\n linkedlist before insertion\n");
    linkedlisttraversal(head);
    head=insertatfirst(head,88);
    printf("\n linkedlist after insertion at first\n");
    linkedlisttraversal(head);
    head=insertatend(head,100);
    printf("\n linkedlist after insertion at end\n");
    linkedlisttraversal(head);
    return 0;
}