#include<stdio.h>
int main()
{
    int a,b,h;
    float x;
    scanf("%d%d%d",&a,&b,&h);
    x=0.5*h*(a+b);
    printf("%.4f",x);
}