#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,cu,r,s=0;
	clrscr();
	printf("enter a number\t:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		r=n%10;
		cu=r*r*r;
		s=s+cu;
		n=n/10;
	}
	if(s==a)
	{
		printf("%d is a armstrong number",a);
	}
	else
	{
		printf("%d is not an armstrong number",a);
	}
	getch();
}

