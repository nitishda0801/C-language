#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[20],i,j,max1=0,max2=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
     for(i=1;i<n;i++)
     {
         if(max1<a[i])
         {
             max1=a[i];
         }
     }
     //max2=a[1];
     for(i=0;i<n;i++)
     {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else 
        if(a[i]<max1&&a[i]>max2)
        {
            max2=a[i];
        }
     }
    printf("\nfirst max is :%d",max1);
    printf("\nsecond max is :%d",max2);
    return 0;
}