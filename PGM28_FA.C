#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,co;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		co=co*i;
	}
	printf("factorial is %d",co);
	getch();
}