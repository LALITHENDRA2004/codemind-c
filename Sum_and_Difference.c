#include<stdio.h>
int main()
{
    int a,b,x,y;
    float c,d,s,m;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    x=a+b;
    y=a-b;
    s=c+d;
    m=c-d;
    printf("%d %d
",x,y);
    printf("%.1f %.1f",s,m);
}