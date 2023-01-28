#include<stdio.h>
void swap(int *x,int *y);
void main()
{
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
     printf("value of before swapping: %d %d\n",a,b);
    swap(&a,&b);
     printf("value after swapping: %d %d\n",a,b);
}
void swap(int *x,int *y)
{
     printf("in function value before swapping: %d %d\n",*x,*y);
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("in function value after swapping: %d %d\n",*x,*y);
}