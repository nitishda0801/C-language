/*C program to read array elements and print the value with the 
addresses*/
#include<stdio.h>
void main()
{
    char arr[60],*p;
    p=arr;
    printf("enter the array element:\n");
    scanf("%s",p);
    for(int i=0;*p!='\0';i++)
    {
        printf("%c",*p);
    }
      for(int i=0;*p!='\0';i++)
    {
         printf("\n adderesses is %u",*p);
    }
   
    
}