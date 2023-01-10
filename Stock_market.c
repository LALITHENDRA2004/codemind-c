#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       int x,y;
    scanf("%d%d",&x,&y);
    if(y>x)
    printf("PROFIT
");
    else if(y<x)
    printf("LOSS
");
    else
    printf("NEUTRAL
");   
    }
}