#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,i;
	clrscr();
	printf("enter number of elements");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("\nenter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("\narray elements are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	getch();
}
