#include<stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;
complex add(complex a,complex b);
int main()
{
    complex a,b,c;
    printf("enter the first complex number\n");
    printf("enter the real and imaginary parts\n");
    scanf("%f%f",&a.real,&a.imag);
    printf("enter the second complex number\n");
    printf("enter the real and imaginary parts\n");
    scanf("%f%f",&b.real,&b.imag);
    c=add(a,b);
    printf("sum=%.1f+%.1fi",c.real,c.imag);
    return 0;
}
complex add(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imag=a.imag+b.imag;
    return (temp);
}