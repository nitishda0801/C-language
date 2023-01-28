#include<stdio.h>
union student
{
    int roll;
    char name[19];
    float percent;
    union date
    {
        int date;
        int month;
        int year;
    }doj;
}std;
int main()
{
    printf("enter roll of student\n");
    scanf("%d",&std.roll);
    printf("roll: %d\n",std.roll);
    printf("enter name of student\n");
    scanf("%s",std.name);
    printf("name: %s\n",std.name);
    printf("enter percentage mark\n");
    scanf("%f",&std.percent);
    printf("percent mark: %f\n",std.percent);
    printf("enter date of joining:\n");
    scanf("%d%d%d",&std.doj.date,&std.doj.month,&std.doj.year);
    printf("date of joining: %d/%d/%d\n",std.doj.date,std.doj.month,std.doj.year);
    return 0;
}
