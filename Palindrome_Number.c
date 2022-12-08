#include<stdio.h>
int main()
{
    int y,i;
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        int rev=0,n,x;
        scanf("%d",&n);
        x=n;
        while(n!=0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        if(x==rev)
        printf("True
");
        else
        printf("False
");
    }
}