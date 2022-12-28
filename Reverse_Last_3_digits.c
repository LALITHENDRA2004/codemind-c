#include<stdio.h>
int main()
{
    int m,n,x,a,r=0;
    scanf("%d",&m);
    n=m%1000;
    x=m/1000;
    a=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    printf("%d",m-a+r);
}