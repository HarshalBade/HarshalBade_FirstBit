#include<stdio.h>
typedef struct Admin{
    int id;
    char name[20];
    float salary;
    float allowance;
}Admin;

Admin* storeData(Admin*,int);
void displayData(Admin*,int);
void main(){
	Admin admin[10];
	int size;
	printf("How many admin data you want to store: ");
	scanf("%d",&size);	
	storeData(admin,size);
	printf("\n * Admin Detail *");
	displayData(admin,size);
}
Admin* storeData(Admin* admin,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Id: ");
		scanf("%d",&admin[i].id);
		
		printf("Enter Name: ");
		scanf("%s",admin[i].name);
		
		printf("Enter Salary: ");
		scanf("%f",&admin[i].salary);
		
		printf("Enter Allowance: ");
		scanf("%f",&admin[i].allowance);
	}	
	return admin;
}
void displayData(Admin* admin, int size){
	for(int i=0;i<size;i++)
		printf("\nAdmin Id: %d\nAdmin Name: %s\nAdmin Salary: %f\nAdmin Allowance: %f\n",admin[i].id,admin[i].name,admin[i].salary,admin[i].allowance);
}