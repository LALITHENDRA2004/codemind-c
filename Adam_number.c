#include<stdio.h>
int main()
{
    int a,n,b,s=0,r=0;//n=12
    scanf("%d",&n);
    a=n*n;//a=144
    while(n!=0)
    {
        r=r*10+n%10;//r=21
        n=n/10;
    }
    b=r*r;//b=441
    while(b!=0)
    {
        s=s*10+b%10;//s=144
        b=b/10;
    }
    if(s==a)
    printf("True");
    else
    printf("False");
}