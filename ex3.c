// C program to implement 
// the above approach 
#include <stdio.h> 

// Declaration of the outer 
// structure 
struct Organisation 
{ 
char organisation_name[20]; 
char org_number[20]; 
	
// Declaration of the employee 
// structure 
struct Employee 
{ 
	int employee_id; 
	char name[20]; 
	int salary; 
	
// This line will cause error because 
// datatype struct Employee is present , 
// but Structure variable is missing. 
}h; 
}; 

// Driver code 
int main() 
{ 
// Structure variable of organisation 
struct Organisation org; 
org.h.employee_id=34;
printf("org number is %d\n",org.h.employee_id);
printf("%ld", sizeof(org)); 
}
