#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i*i;
        b=b+i;
    }
    c=b*b;
    d=c-a;
    printf("%d",d);
}