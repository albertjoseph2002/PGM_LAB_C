#include<stdio.h>
#include<stdlib.h>
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);       
    }
}

int main()
{
    int n;
    
    printf("enter a limit");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=fib(i);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}