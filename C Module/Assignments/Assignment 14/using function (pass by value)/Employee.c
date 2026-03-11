#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;
Employee storeData();
Employee displayData(Employee);
void main(){
	Employee emp;
	
	emp=storeData();
	displayData(emp);
}
Employee storeData(){
	Employee emp;
	printf("Enter the Id: ");
	scanf("%d",&emp.id);
	
	printf("Enter the Name: ");
	scanf("%s",emp.name);
	
	printf("Enter the Salary: ");
	scanf("%lf",&emp.salary);
	
	return emp;
}
Employee displayData(Employee emp){
	printf("Employee Id: %d\nEmployee Name: %s\nEmployee Salary: %lf",emp.id,emp.name,emp.salary);
	return emp;
}