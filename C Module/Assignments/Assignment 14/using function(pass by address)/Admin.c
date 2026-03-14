#include<stdio.h>
typedef struct Admin{
    int id;
    char name[20];
    float salary;
    float allowance;
}Admin;

void storeData(Admin*);
void displayData(Admin);
void main(){
	Admin adn;	
	storeData(&adn);
	displayData(adn);
}
void storeData(Admin* adn){
	printf("Enter Id: ");
	scanf("%d",&adn->id);
	
	printf("Enter Name: ");
	scanf("%s",adn->name);
	
	printf("Enter Salary: ");
	scanf("%f",&adn->salary);
	
	printf("Enter Allowance: ");
	scanf("%f",&adn->allowance);
}
void displayData(Admin adn){
	printf("\nAdmin Id: %d\nAdmin Name: %s\nAdmin Salary: %f\nAdmin Allowance: %f",adn.id,adn.name,adn.salary,adn.allowance);
}