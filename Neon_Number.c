#include<stdio.h>
int main()
{
    int n,a,b=0;
    scanf("%d",&n);//n=9
    a=n*n;//a=81
    while(a>0)
    {
        b=b+a%10;//b=9
        a=a/10;
    }
    if(b==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}