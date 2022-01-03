#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50];
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements are");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	getch();
}