#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[20];
	clrscr();
	strcpy(str2,str1);
	printf("copied string is : \t%s",str2);
	getch();
}