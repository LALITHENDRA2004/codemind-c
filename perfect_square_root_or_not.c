#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        a=0;
    }
    if(a==0)
    printf("True");
    else
    printf("False");
}