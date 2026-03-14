#include<stdio.h>
struct HR{
    int id;
    char name[20];
    float salary;
    float commission;
};

void main(){
	struct HR hr;
	
	printf("Enter the Id: ");
	scanf("%d",&hr.id);
	
	printf("Enter the Name: ");
	scanf("%s",hr.name);
	
	printf("Enter the Salary: ");
	scanf("%f",&hr.salary);
	
	printf("Enter the Commission: ");
	scanf("%f",&hr.commission);
	
	printf("\nHR Id: %d\nHR Name: %s\nHR Salary: %f\nHR Commission: %f",hr.id,hr.name,hr.salary,hr.commission);
}