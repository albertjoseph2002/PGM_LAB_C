#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[10];
    char gender[10];
    float cgpa;
};

void main()
{
    int n;
    printf("enter the numebr of students");
    scanf("%d",&n);
    struct student obj[n];
    for(int i=0;i<n;i++)
    {
        printf("\nenter details of student %d",i+1);
        printf("\nenter name");
        scanf("%s",obj[i].name);
        printf("\nenter rollno");
        scanf("%d",&obj[i].rollno);
        printf("\nenter gender");
        scanf("%s",obj[i].gender);
        printf("\nenter cgpa:");
        scanf("%f",&obj[i].cgpa);

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(obj[j].cgpa<obj[j+1].cgpa)
            {
                struct student temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;
            }
        }
    }
    printf("\nRANKLIST\n");
    for(int i=0;i<n;i++)
    {
        printf("rollno is %d and cgpa is %f\n",obj[i].rollno,obj[i].cgpa);
    }
    printf("\nstudent lis of cgpa below 7\n");
    for(int i=0;i<n;i++)
    {
        if(obj[i].cgpa<7)
        {
            printf("name is %s and cgpa is %f\n",obj[i].name,obj[i].cgpa);

        }
    }
}