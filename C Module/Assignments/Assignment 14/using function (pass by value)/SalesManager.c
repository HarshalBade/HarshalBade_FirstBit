#include<stdio.h>
typedef struct SalesManager{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
}SalesManager;
SalesManager storeData();
SalesManager displayData(SalesManager);
void main(){
	SalesManager manager;
	manager=storeData();
	displayData(manager);
}
SalesManager storeData(){
	SalesManager manager;
	printf("Enter the Id: ");
	scanf("%d",&manager.id);
	
	printf("Enter the Name: ");
	scanf("%s",manager.name);
	
	printf("Enter the Salary: ");
	scanf("%f",&manager.salary);
	
	printf("Enter the Incentive: ");
	scanf("%f",&manager.incentive);
	
	printf("Enter the Target: ");
	scanf("%d",&manager.target);
	
	return manager;
}
SalesManager displayData(SalesManager manager){
	printf("\nSalesManager Id: %d\nSalesManager Name: %s\nSalesManager Salary: %f\nIncentive: %f\nTarget: %d",manager.id,manager.name,manager.salary,manager.incentive,manager.target);
	return manager;
}