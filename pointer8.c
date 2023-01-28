
float sum(float,float,float,float,float);
float mean(float,float,float,float,float);
float dev(float,float,float,float,float);
#include<stdio.h>
#include<math.h>
int main()
{
     float p,q,r,s,t;
    printf("\n enter the five integer: ");
    scanf("%f %f %f %f %f ",&p,&q,&r,&s,&t);
    float x,y,z;
    x=sum(p,q,r,s,t);
     y=mean(p,q,r,s,t);
      z=dev(p,q,r,s,t);
    printf("\n sum is %f",x);
    printf("\n mean is %f",y);
    printf("\n deviation is %f",z);
}
 float sum(float a,float b,float c,float d,float e)
 {
     float S;
     S=(a+b+c+d+e);
     return S;
 }
 float mean(float a,float b,float c,float d,float e)
 {
     float M;
     M=(a+b+c+d+e)/5;
     return M;
 }
 float dev(float a,float b,float c,float d,float e)
{
    float sum, D;
    sum=(a+b+c+d+e);
    D=sqrt(((a-sum)*(a-sum)+(b-sum)*(b-sum)+(c-sum)*(c-sum)+(d-sum)*(d-sum)+(e-sum)*(e-sum))/5);
    return D;
}