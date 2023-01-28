#include<stdio.h>
enum week {mon,tue,wed,thu,fri,sat,sun};
int main()
{
    int i;
    for(i=mon;i<=sun;i++)
    printf("%d ",i);
    printf("\n");
    printf("%d \n",wed);
    printf("%d \n",fri);
    return 0;
}