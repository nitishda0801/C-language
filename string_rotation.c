#include<stdio.h>
#include <string.h>
int main()
{
char s[1000];
int n,i=0,c=0,k=0;
printf("Enter string and no of rotation\n");
scanf("%s%d",s,&n);
for(int j=0;j<strlen(s);j++)
{
if(k>=strlen(s)-1)
{
i=c;
c++;                                                                                   
}                                
else                     
{                                                
i=strlen(s)-n+j;                                                                          
k=i;                                                                                                                                                                                                                        
}
printf("%c",s[i]);                   

}}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    