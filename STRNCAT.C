#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[20]="hello world";
	char st2[50]="welcome to c";
	clrscr();
	strncat(st1,st2,8);
	printf("string after combaining:\t %s",st1);
	getch();
}