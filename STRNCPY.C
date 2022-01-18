#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[20]="hello world";
	char st2[50];
	clrscr();
	strncpy(st2,st1,5);
	printf("string after copying:\t %s",st2);
	getch();
}