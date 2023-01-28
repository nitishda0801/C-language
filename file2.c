#include<stdio.h>
#include<stdlib.h>
int main()
{
     FILE *fp;
    fp=fopen("D://C//nitish.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit (1);
    }
    FILE *fpt;
    fpt=fopen("D://C//ramnagar.txt","w");
    if(fpt==NULL)
    {
        printf("file not opened");
        exit(1);
    }
    char a[100];
    while(!feof(fp))
    { 
        fgets(a,100,fp);
        fputs(a,fpt);
    }
    fclose(fp);
    fclose(fpt);
    return 0;
}