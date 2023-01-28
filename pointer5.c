/* c program demonstrate the example of array of pointer*/
#include<stdio.h>
void main()
{
    int *ptr[111],n;
    printf("\n enter the size of array pointer: ");
    scanf("%d",&n);
    printf("\n enter element: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr);
        printf("\nelements are: ");
        printf("%d ",*ptr);
    }
}