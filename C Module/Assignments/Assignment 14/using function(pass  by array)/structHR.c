#include<stdio.h>
struct HR{
    int id;
    char name[20];
    float salary;
    float commission;
};
struct HR* storeData(struct HR*,int);
void displayData(struct HR*,int);
void main(){
	struct HR hr[10];
	int size;
	printf("Enter number of HR to store: ");
	scanf("%d",&size);
	storeData(hr,size);
	printf("\n* HR Detail *");
	displayData(hr,size);
}
struct HR* storeData(struct HR* hr,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Id: ");
		scanf("%d",&hr[i].id);
		
		printf("Enter Name: ");
		scanf("%s",hr[i].name);
		
		printf("Enter Salary: ");
		scanf("%f",&hr[i].salary);
		
		printf("Enter Commission: ");
		scanf("%f",&hr[i].commission);
		}
	return hr;
}
void displayData(struct HR* hr,int size){
	for(int i=0;i<size;i++)
		printf("\nHR Id: %d\nHR Name: %s\nHR Salary: %f\nHR Commission: %f\n",hr[i].id,hr[i].name,hr[i].salary,hr[i].commission);
}