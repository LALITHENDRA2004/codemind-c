#include<stdio.h>
int main()
{
    int n,k,x,y,z,a;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    z=k*x+(n-k)*x;
    a=k*x+(n-k)*y;
    if(n==k)
    printf("%d",k*x);
    else if(n>k&&x<y)
    printf("%d",z);
    else
    printf("%d",a);
}