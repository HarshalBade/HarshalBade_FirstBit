#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;

void storeData(Employee*);
void displayData(Employee);
void main(){
	Employee emp;
	storeData(&emp);
	displayData(emp);
}
void storeData(Employee* emp){
	printf("Enter Id: ");
	scanf("%d",&emp->id);
	
	printf("Enter Name: ");
	scanf("%s",emp->name);
	
	printf("Enter Salary: ");
	scanf("%lf",&emp->salary);
}
void displayData(Employee emp){
	printf("\nEmployee Id: %d\nEmployee Name: %s\nEmployee Salary: %lf",emp.id,emp.name,emp.salary);
}