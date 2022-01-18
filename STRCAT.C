#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="world";
	clrscr();
	printf("%s",strcat(str1,str2));
	getch();
}