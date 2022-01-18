#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="world";
	int a;
	clrscr();
	a=strcmp(str1,str2);
	printf("copmarison value %d",a);
	getch();
}