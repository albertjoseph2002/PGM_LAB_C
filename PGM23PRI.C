#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum++;
		}
	}
	if(sum==2)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("it is not a prime number");
	}
	getch();
}