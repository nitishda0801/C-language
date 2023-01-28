#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter size: ");
    scanf("%d",&n);
    for(i=1;i<4;i++)
    {

         for(j=1;j<=i;i++)
        {
          printf("%d",j);
        
        }
        printf("\n");
    }
    return 0;
}