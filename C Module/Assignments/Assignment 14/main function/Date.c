#include<stdio.h>
typedef struct Date{
    int date,month,year;
}Date;

void main(){
	Date dt;
	printf("Enter the Date: ");
	scanf("%d",&dt.date);
	
	printf("Enter the Month: ");
	scanf("%d",&dt.month);
	
	printf("Enter the Year: ");
	scanf("%d",&dt.year);
	
	printf("\nDate: %d-%02d-%d",dt.date,dt.month,dt.year);
}