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
    linkedlisttraversal(head);
    return 0;
}