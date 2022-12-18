#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    if(k*m>=n)
    printf("1");
    else if(k*m<n&&n%(k*m)==0)
    printf("%d",n/(k*m));
    else
    printf("%d",n/(k*m)+1);
}