// c program of average and percentage of obtained marks
float average(int,int,int);
float percentage(int,int,int);
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\n enter the obtained marks:");  //total 100 mark per subject
    scanf("%d%d%d",&a,&b,&c);
    float p,q;
    p=average(a,b,c);
    q=percentage(a,b,c);
    printf("\n Average marks is %.2f",p);
     printf("\n Percentage is %.2f",q);
}
float average(int x,int y,int z)
{
    float average;
    average=(x+y+z)/3;
    return average;
}
float percentage(int x,int y,int z)
{
    float percentage;
    percentage=(x+y+z)*100/300;
    return percentage;
}