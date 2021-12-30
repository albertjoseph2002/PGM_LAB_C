#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,a;
	clrscr();
	printf("enter the no of rows");
	scanf("%d",&n);
	a=n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=a;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
}