#include<stdio.h>
void main()
{
    int n,i,j,k,l,c=1,d;
    printf("enter\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        printf(" ");
        for(k=1,c=1;k<=i;k++)
        {
        printf("%d",c);
        c++;
        }
        for(l=1,d=i;l<i;l++)
        {
        printf("%d",--d);
        }
        printf("\n");
    }
}