#include<stdio.h>
struct HR{
    int id;
    char name[20];
    float salary;
    float commission;
};

void storeData(struct HR*);
void displayData(struct HR);
void main(){
	struct HR hr;
	storeData(&hr);
	displayData(hr);
}
void storeData(struct HR* hr){
	printf("Enter Id: ");
	scanf("%d",&hr->id);
	
	printf("Enter Name: ");
	scanf("%s",hr->name);
	
	printf("Enter Salary: ");
	scanf("%f",&hr->salary);
	
	printf("Enter Commission: ");
	scanf("%f",&hr->commission);
}
void displayData(struct HR hr){
	printf("\nHR Id: %d\nHR Name: %s\nHR Salary: %f\nHR Commission: %f",hr.id,hr.name,hr.salary,hr.commission);
}