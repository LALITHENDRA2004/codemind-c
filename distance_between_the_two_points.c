#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%0.4f",x);
}