#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int i=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        printf("\n");
        else
        printf("%c",s[i]);
    }
}