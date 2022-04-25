#include<stdio.h>
#include<conio.h>
#define max 5

int queue[max],rear=-1,front=-1;
void insert();
void delet();
void display();

void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\n******menu******\n");
		printf("\n1.insert\n2.delete\n3.display\n4.exit");
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("exited");
				break;
		}
	}
	while(ch!=4);
	getch();
}

void insert()
{
	int item;
	if(rear==max-1)
	{
		printf("overflow\n");
	}
	else
	{
		printf("\nenter the item to be inserted");
		scanf("%d",&item);
		if(rear==-1 && front==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
	}
}

void delet()
{
	int lit;
	if(front==-1 || front>rear)
	{
		printf("under flow\n");
	}
	else
	{
		lit=queue[front];
		front=front+1;
		printf("deleted element is %d",lit);
	}
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("the stack is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
