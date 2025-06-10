#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("enter a number to find factorial");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}