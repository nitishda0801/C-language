#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100];
    int i,j;
    printf("\n enter s1: ");
    gets(s1);
    printf("\n enter s2: ");
    gets(s2);
    i=strlen(s1);
        for(j=0;s2[j]!='\0';j++,i++)
        {
            s1[i]=s2[j];
        }
        s1[i]='\0';
        printf("\nresultant string: %s",s1);
}