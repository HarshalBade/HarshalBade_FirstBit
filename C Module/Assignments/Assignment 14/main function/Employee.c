#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;

void main(){
	Employee emp;
	printf("Enter the Id: ");
	scanf("%d",&emp.id);
	
	printf("Enter the Name: ");
	scanf("%s",emp.name);
	
	printf("Enter the Salary: ");
	scanf("%lf",&emp.salary);
	
	printf("\nEmployee Id: %d\nEmployee Name: %s\nEmployee Salary: %lf",emp.id,emp.name,emp.salary);
}