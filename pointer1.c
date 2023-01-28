/*Write a program in C to find the maximum number between two 
numbers using a pointer*/
#include<stdio.h>
void main()
{
    int m,n,*p,*q;
    p=&m;
    q=&n;
    printf("enterr two number\n");
    scanf("%d%d",&m,&n);
    if(*p>*q)
      printf("bigger is: %d",*p);
      else 
      printf("bigger is: %d",*q);
}
