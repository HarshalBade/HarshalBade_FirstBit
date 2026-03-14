#include<stdio.h>
typedef struct SalesManager{
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
}SalesManager;
SalesManager* storeData(SalesManager*,int);
void displayData(SalesManager*,int);
void main(){
	SalesManager manager[10];
	int size;
	printf("Enter number Manager to store: ");
	scanf("%d",&size);
	storeData(manager,size);
	printf("\n* SalesManger Detail *");
	displayData(manager,size);
}
SalesManager* storeData(SalesManager* manager,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Id: ");
		scanf("%d",&manager[i].id);
		
		printf("Enter Name: ");
		scanf("%s",manager[i].name);
		
		printf("Enter Salary: ");
		scanf("%f",&manager[i].salary);
		
		printf("Enter Incentive: ");
		scanf("%f",&manager[i].incentive);
		
		printf("Enter Target: ");
		scanf("%d",&manager[i].target);
	}
	return manager;
}
void displayData(SalesManager* manager,int size){
	for(int i=0;i<size;i++)
		printf("\nId: %d\nName: %s\nSalary: %f\nIncentive: %f\nTarget: %d",manager[i].id,manager[i].name,manager[i].salary,manager[i].incentive,manager[i].target);
}