#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,fact=1,count=0;
	clrscr();
	while(ch!=4)
	{
		printf("\n^^^^^^^^^MENU^^^^^^^^^^^\n");
		printf("1.FACTORIAL \n 2.PRIME OR NOT \n 3.ODD OR EVEN \n 4.EXIT \n");
		printf("enter a choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter a number");
				scanf("%d",&n);
				for(i=n;i>0;i--)
				{
					fact=fact*i;
				}
				printf("factorial of %d is %d",n,fact);
				break;
			case 2:
				printf("enter a number");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
					if(n%i==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					printf("%d is prime",n);
				}
				else
				{
					printf("%d is not prime",n);
				}
				break;
			case 3:
				printf("enter a number");
				scanf("%d",&n);
				if(n%2==0)
				{
					printf("%d is even",n);
				}
				else
				{
					printf("%d is odd",n);
				}
				break;
			case 4:
				printf("exit");
				break;
		}
	}
	getch();
}