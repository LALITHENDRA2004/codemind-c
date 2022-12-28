#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(2*x>5*y)
        printf("Chocolate
");
        else if(2*x<5*y)
        printf("Candy
");
        else
        printf("Either
");
    }
    
}