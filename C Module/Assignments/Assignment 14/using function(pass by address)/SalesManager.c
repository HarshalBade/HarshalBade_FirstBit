#include<stdio.h>
typedef struct SalesManager{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
}SalesManager;

void storeData(SalesManager*);
void displayData(SalesManager);
void main(){
	SalesManager manager;
	storeData(&manager);
	displayData(manager);
}
void storeData(SalesManager* manager){
	printf("Enter Id: ");
	scanf("%d",&manager->id);
	
	printf("Enter Name: ");
	scanf("%s",manager->name);
	
	printf("Enter Salary: ");
	scanf("%f",&manager->salary);
	
	printf("Enter Incentive: ");
	scanf("%f",&manager->incentive);
	
	printf("Enter Target: ");
	scanf("%d",&manager->target);
}
void displayData(SalesManager manager){
	printf("\nSalesManager Id: %d\nSalesManager Name: %s\nSalesManager Salary: %f\nIncentive: %f\nTarget: %d",manager.id,manager.name,manager.salary,manager.incentive,manager.target);
}