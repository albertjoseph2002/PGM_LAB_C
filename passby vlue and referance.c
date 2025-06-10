#include<stdio.h>
void referanceswap(int *a,int *b);
void valueswap(int x,int y);
void main()
{
    int *a,*b;
    int x,y;
    printf("enter two value ");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    valueswap(x,y);
    referenceswap(a,b);
}
void referenceswap(int *a,int *b)
{
    int *c=*a;
    *a=*b;
    *b=*c;
    printf("after referance  swapping %d\t%d",*a,*b);
}
void valueswap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("\nafter swapping %d \t%d",x,y);
}