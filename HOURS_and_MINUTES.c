#include<stdio.h>
int main()
{
    int t,m,h;
    scanf("%d",&t);
    m=t%60;
    h=t/60;
    printf("%d Hour(s) %d Minute(s)",h,m);
}