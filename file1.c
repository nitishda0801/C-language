#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("D://C//nitish.txt","w");
    if(fp==NULL)
    {
        printf("Error!");
        exit (1);
    }
    char a[100];
    fgets(a,100,stdin);
    fprintf(fp,"%s",a);
    return 0;
}