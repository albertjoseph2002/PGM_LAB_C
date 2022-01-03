#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[50],l;
	clrscr();
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("greatest element is %d",l);
	getch();
}
