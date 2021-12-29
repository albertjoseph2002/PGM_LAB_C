#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("it is not a perfect number");
	}
	getch();
}