#include<stdio.h>
int main()
{
	int x=0,n,a,r=0,b;
	scanf("%d",&n);
	a=n*n;//n=12,a=144
	while(n!=0)
	{
		r=r*10+n%10;//r=21
		n=n/10;
	}
	b=r*r;//b=441
	while(b!=0)
	{
		x=x*10+b%10;//x=441
		b=b/10;
	}
	if(x==a)
	printf("True");
	else
	printf("False");
}