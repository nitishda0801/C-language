/* hand shaking problem*/
#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        int c=a*(a-1)/2;
        printf("%d\n",c);
    }
    return 0;
}