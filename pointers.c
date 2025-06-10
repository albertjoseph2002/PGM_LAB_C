#include<stdio.h>
void swap(int *,int *);
void main()
{
    int *x,*y,a,b;
    int sum=0;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    x=&a;
    y=&b;
    swap(x,y);
}
void swap(int *x,int *y)
{
    int s=0;
    s=*x+*y;
    printf("%d",s);
}