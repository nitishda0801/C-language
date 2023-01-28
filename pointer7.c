float dev(int,int,int,int,int);
#include<stdio.h>
#include<math.h>
void main()
{
     int a,b,c,d,e;
    printf("\n enter the five integer: ");
    scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
    dev(a,b,c,d,e);
}
 float dev(int a,int b,int c,int d,int e)
{
    int sum;
    float D,M;
    sum=(a+b+c+d+e);
    printf("\n sum is %d",sum);
    M=sum/5;
    printf("\n mean is %f",M);
    D=sqrt(((a-sum)*(a-sum)+(b-sum)*(b-sum)+(c-sum)*(c-sum)+(d-sum)*(d-sum)+(e-sum)*(e-sum))/5);
    printf("\n deviation is %f",D);
}