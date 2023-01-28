#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a[26];
    scanf("%s",s);
    int i,l,c,j;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        l=i;
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            c++;
        }
        printf("'%c'= %d  times\n",s[i],c);
    }
    return 0;
}