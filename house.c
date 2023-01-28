//initially all houses are closed
#include<stdio.h>
void main()
{
    int a,i,j,open=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=(a/i);j=(j+i))
        {
            if(j==i)
            open++;
        }
    }
    printf("%d %d",open,a-open);
}
