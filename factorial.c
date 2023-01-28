#include<stdio.h>
int factorial(int n);

int main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=factorial(x);
    printf("factorial of %d is :%d",x,y);
}
int factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
        return(n*factorial(n-1));
}