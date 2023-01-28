#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k,a[100][100],b[100][100],c[100][100];
    printf("enter m n p q..\n");
    scanf("%d%d%d%d",&m,&n,&p,&q);
if(n==p)
{
    printf("first matrix\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("second matrix\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }    
        
}
else
printf("multiply not possible");
}