#include<stdio.h>
typedef struct Employee{
	int id;
	char name[20];
	double salary;
}Employee;
Employee* storeData(Employee*,int);
void displayData(Employee*,int);
void main(){
	Employee employee[10];
	int size;
	printf("Enter number employee to store: ");
	scanf("%d",&size);
	storeData(employee,size);
	printf("\n* Employee Detail *");
	displayData(employee,size);
}
Employee* storeData(Employee* employee,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Id: ");
		scanf("%d",&employee[i].id);
		
		printf("Enter Name: ");
		scanf("%s",employee[i].name);
		
		printf("Enter Salary: ");
		scanf("%lf",&employee[i].salary);
	}
	return employee;
}
void displayData(Employee* emp, int size){
	for(int i=0;i<size;i++)
		printf("\nId    : %d\nName  : %s\nSalary: %lf\n",emp[i].id,emp[i].name,emp[i].salary);
}