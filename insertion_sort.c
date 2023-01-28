#include<stdio.h>
void insert(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while((j>=0)&&(temp<a[j]))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }}
void print(int a[],int n){
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i;
    if(n<0)
    printf("Invalid Size");
    else
    for(i=0;i<n;i++)  {
        scanf("%d",&a[i]);
    }
    insert(a,n);
    print(a,n);
    return 0;
}