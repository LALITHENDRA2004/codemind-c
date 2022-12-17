#include<stdio.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    if(n<4)
    printf("%d",a);
    else if(n%4==0)
    printf("%d",n/4);
    else
    printf("%d",(n/4)+1);
}