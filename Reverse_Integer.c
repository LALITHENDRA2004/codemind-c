#include<stdio.h>
int main()
{

        int rev=0,n,x;
        scanf("%d",&n);
        x=n;
        while(n!=0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        printf("%d",rev);
}