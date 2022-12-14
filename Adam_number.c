#include<stdio.h>
int main()
{
    int n,a,c=0,d,e=0;
    scanf("%d",&n);
    a=n*n;//n=12,a=144
    while(n>0)
    {
        c=c*10+n%10;//c=21
        n=n/10;
    }
    d=c*c;//d=441
    while(d>0)
    {
        e=e*10+d%10;//e=144
        d=d/10;
    }
    if(a==e)
    printf("True");
    else
    printf("False");
}