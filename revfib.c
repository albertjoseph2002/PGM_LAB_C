#include<stdio.h>
void reversefib(int a,int b,int count);
int main()
{
    int limit;
    printf("enter the limit");
    scanf("%d",&limit);
    reversefib(0,1,limit);
}

void reversefib(int a,int b,int count)
{
    if(count<=0)
    {
        return;
    }
    reversefib(b,a+b,count-1);
    printf("%d\t",a);
}