#include<stdio.h>
int main()
{
    int n,a,r,l=0;
    scanf("%d",&n);
    a=n%10;
    while(n!=0)
    {
        r=n%10;
        if(l<r)
        l=r;
        n=n/10;
    }
    printf("%d",l);
}