#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c,a=0,b=1;
	clrscr();
	printf("enter a limit for the numbers of fibonacci series :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}