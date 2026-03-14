#include<stdio.h>
typedef struct Date{
    int date,month,year;
}Date;
void storeData(Date*);
void displayData(Date);
void main(){
	Date dt;
	storeData(&dt);
	displayData(dt);
}
void storeData(Date* dt){
	printf("Enter Date: ");
	scanf("%d",&dt->date);
	
	printf("Enter Month: ");
	scanf("%d",&dt->month);
	
	printf("Enter Year: ");
	scanf("%d",&dt->year);
}
void displayData(Date dt){
	printf("\nDate: %d-%02d-%d",dt.date,dt.month,dt.year);
}
