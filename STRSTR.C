#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char st1[]="welcome to c";
	char st2[]="to";
	char* a;
	clrscr();
	a=strstr(st1,st2);
	if(a)
	{
		printf("first occurance of '%s' in '%s' is '%s'",st2,st1,a);
	}
	else
	{
		printf("string not found");
	}
	getch();
}