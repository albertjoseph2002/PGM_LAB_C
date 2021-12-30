#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,a;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(a==sum)
	{
		printf("%d is a paliondrome",a);
	}
	else
	{
		printf("it is not paliondrome");
	}
	getch();
}