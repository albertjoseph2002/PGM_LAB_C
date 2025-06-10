#include<stdio.h>
int add(int x,int y);
int main()
{
    int a,b,sum=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum is %d",sum);
    return 0;
}

int add(int x, int y)
{
    int s;
    s=x+y;
    return s;
}