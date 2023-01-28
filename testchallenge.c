/*in array a[n] the task is to find the count of element 
whose values is greater than all of its prior element */
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[199],i,j,max=0,c=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            c++;
            max=a[i];
        }
    }
    printf("%d ",c);
    return 0;
}