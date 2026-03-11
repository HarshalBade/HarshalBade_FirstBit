#include<stdio.h>
typedef struct Admin{
    int id;
    char name[20];
    float salary;
    float allowance;
}Admin;
Admin storeData();
Admin displayData(Admin);
void main(){
	Admin adn;
	
	adn=storeData();
	displayData(adn);
}
Admin storeData(){
	Admin adn;
	printf("Enter the Id: ");
	scanf("%d",&adn.id);
	
	printf("Enter the Name: ");
	scanf("%s",adn.name);
	
	printf("Enter the Salary: ");
	scanf("%f",&adn.salary);
	
	printf("Enter the Allowance: ");
	scanf("%f",&adn.allowance);
	return adn;
}
Admin displayData(Admin adn){
	printf("\nAdmin Id: %d\nAdmin Name: %s\nAdmin Salary: %f\nAdmin Allowance: %f",adn.id,adn.name,adn.salary,adn.allowance);
	return adn;
}
