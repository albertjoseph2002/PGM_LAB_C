#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50],i,j,r,c;
	clrscr();
	printf("enter the no of rows");
	scanf("%d",&r);
	printf("\neneter the no of coloumns");
	scanf("%d",&c);
	printf("\n enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("array elemnats are \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
