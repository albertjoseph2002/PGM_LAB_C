#include<stdio.h>
int main()
{
    int a,sum= 1;
    int n;
    printf("enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        n=a%10;
        sum=sum*10+n;
        a=a/10;

    }
    printf("after reversing %d",sum);
    return 0;
}