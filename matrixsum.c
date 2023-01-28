#include<stdio.h>
int main()
{
    int r,c,i,j,a[100][100],b[100][100],sum[100][100];
    printf("enter row and column\n");
    scanf("%d%d",&r,&c);
    printf("enter first matr\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("enter second matrix\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    scanf("%d",&b[i][j]);
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
        sum[i][j]=a[i][j]+b[i][j];
        printf("%d ",sum[i][j]);
        }
        printf("\n");
     }
        return 0;
}