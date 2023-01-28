// c program to print the length of string using pointer
#include<stdio.h>
#include<string.h>
void main()
{
    char c[20];
    char *ptr;
    ptr=c;
    printf("enter the string: ");
    scanf("%s",ptr);
   int l= strlen(ptr);
    printf("length of %s is %d",ptr,l);


}