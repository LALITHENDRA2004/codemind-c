#include<stdio.h>
int col(char ch)
{
    if(ch=='V')
    return 1;
    else if(ch=='I')
    return 2;
    else if(ch=='B')
    return 3;
    else if(ch=='G')
    return 4;
    else if(ch=='Y')
    return 5;
    else if(ch=='O')
    return 6;
    else if(ch=='R')
    return 7;
    else
    return 8;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    int x=col(ch);
    if(x==1)
    printf("Violet");
    else if(x==2)
    printf("Indigo");
    else if(x==3)
    printf("Blue");
    else if(x==4)
    printf("Green");
    else if(x==5)
    printf("Yellow");
    else if(x==6)
    printf("Orange");
    else if(x==7)
    printf("Red");
    else
    printf("-1");
}