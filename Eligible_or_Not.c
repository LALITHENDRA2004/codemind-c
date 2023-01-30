#include<stdio.h>
int main()
{
    int t,j,b;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        int x,y,a;;
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x&&a<y)
        printf("YES
");
        else
        printf("NO
");
    }
}