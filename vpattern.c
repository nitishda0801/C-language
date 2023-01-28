#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            if( i==0||i==j ||i+j==2*n-2)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}