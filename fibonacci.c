#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);//0 1 1
        c=a+b;//c=1,2,3
        a=b;//a=1,1,2
        b=c;//b=1,2,3
    }
}