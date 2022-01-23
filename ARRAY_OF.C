#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	float mark;
};

void main()
{
	struct student s[50];
	int i,n;
	clrscr();
	printf("number of student details");
	scanf("%d",&n);
	printf("\n enter the student detail\n");
	for(i=0;i<=n;i++)
	{
		printf("enter name of student");
		scanf("%s",&s[i].name);
		printf("enter roll no");
		scanf("%d",&s[i].roll);
		printf("enter the mark");
		scanf("%f",&s[i].mark);
	}
	printf("the details are\n");
	printf("NAME \t ROLL NO \t MARK \n");
	for(i=0;i<n;i++)
	{
		printf("%s \t %d \t %f \n",s[i].name,s[i].roll,s[i].mark);
	}
	getch();
}
