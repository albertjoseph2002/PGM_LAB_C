#include<stdio.h>
#include<stdlib.h>

struct employee
{
  char name[10];
  char empid[10];
  int salary;
};

int main()
{
  int n;
  printf("enter the numebr of employees");
  scanf("%d",&n);
  struct employee emp[n];
  for(int i=1;i<=n;i++)
  {
    printf("\nenter name ");
    scanf("%s",&emp[i].name);
    printf("\nenter empid");
    scanf("%s",&emp[i].empid);
    printf("\nenter salary");
    scanf("%d",&emp[i].salary);
  }
  printf("employee details are\n");
  for(int i=1;i<=n;i++)
  {
    printf("\nname is %s",emp[i].name);
    printf("\nempid %s",emp[i].empid);
    printf("\nsalary is %d",emp[i].salary);
  }
  return 0;

}