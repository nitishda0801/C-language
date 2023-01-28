#include<stdio.h>
int searcharray(int a[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        return i;
       // break;
       
    }
  return -1;
}
int main()
{
    int n;
      printf("enter array size\n");
    scanf("%d",&n);
    int a[18],i;
      printf("enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int element;
    printf("enter element to srarch\n");
    scanf("%d",&element);
    int elementindex=searcharray(a,n,element);
    if(elementindex==-1)
    printf("element not found\n");
    else
    printf("index of %d was:%d",element,elementindex);
    return 0;
}