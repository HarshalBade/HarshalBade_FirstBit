#include<stdio.h>
typedef struct Date{
    int date,month,year;
}Date;
Date storeData();
Date displayData(Date);
void main(){
	Date dt;
	dt=storeData();
	displayData(dt);
}
Date storeData(){
	Date dt;
	printf("Enter the Date: ");
	scanf("%d",&dt.date);
	
	printf("Enter the Month: ");
	scanf("%d",&dt.month);
	
	printf("Enter the Year: ");
	scanf("%d",&dt.year);
	
	return dt;
}
Date displayData(Date dt){
	printf("\nDate: %d-%d-%d",dt.date,dt.month,dt.year);
	return dt;
}
