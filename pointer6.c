/* c program to sort an array using pointer*/
#include<stdio.h>
void main()
{
    int s1[]={1,2,3,4};
    int s2[]={5,6,7,8};
    int *p[2]={s1,s2};
    int i;
    printf("\n elements are: ");
    for(i=0;i<2;i++)
    printf("%d %d %d %d ",*p[i],(*p[i]+1),(*p[i]+2),(*p[i]+3));
    
}