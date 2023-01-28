#include<stdio.h>
#include<string.h>
int main()
{
	int k,i,j;
    char s[100],last;
    printf("Enter a string: ");
	scanf("%s",s);
    printf("Number of rotation: ");
	scanf("%d",&k);
	int n=strlen(s);
	for(i=0;i<k;i++)
	{
		last=s[n-1];
		for(j=n-1;j>0;j--)
		{
			s[j]=s[j-1];
		}
		s[0]=last;
	}
     printf("Rotated string: ");
	for(i=0;i<n;i++)
	{
	printf("%c",s[i]);
	}
	return 0;
}