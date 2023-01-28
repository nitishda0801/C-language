// c program of sum array element using pointer 
#include<stdio.h>
void main()
{
    int a[199];
    int *ptr;
    int n,i,sum=0;
    ptr=a;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("\n enter the array element ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
       sum=sum+*ptr;
    }
       printf("sum is %d",sum);
}