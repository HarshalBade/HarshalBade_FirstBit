#include<stdio.h>
typedef struct Date{
    int date,month,year;
}Date;
Date* storeData(Date*,int); 
void displayData(Date*,int);
void main(){
	Date date[5];
	int size;
	printf("Enter number date to store: ");
	scanf("%d",&size);
	storeData(date,size);
	printf("\n * Stored Dates *");
	displayData(date,size);
}
Date* storeData(Date* dt,int size){
	for(int i=0;i<size;i++){
		printf("Enter Date (DD-MM-YYYY): ");
		scanf("%d %d %d",&dt[i].date,&dt[i].month,&dt[i].year);
	}
	return dt;
}
void displayData(Date* dt,int size){
	for(int i=0;i<size;i++)
		printf("\nDate: %02d-%02d-%d",dt[i].date,dt[i].month,dt[i].year);
}
