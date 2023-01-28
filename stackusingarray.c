#include<stdio.h>
#include<stdlib.h>
#define n 5;
int stack[5];
int top=-1;
void push()
    {
        int val;
        if(top==4)
        {
            printf("Overflow\n");
        }
        else{
            printf("Enter the data\n");
            scanf("%d",&val);
            top++;
            stack[top]=val;
        }
    }
void pop()
{
    int val;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        val=stack[top];
        top--;
        printf("%d\n",val);
       
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}
void display()
{
    int i;
    if(top==-1)
    printf("Underflow\n");
    else
    printf("Stack :\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int op;
    do
    {
        printf("Enter choice:1.Push:2.pop:3.peek:4.display\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
            default :printf("Invalid coice\n");
            
        }
    } while (op!=0);
    return 0;
}
