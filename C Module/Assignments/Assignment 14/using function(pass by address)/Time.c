#include<stdio.h>
struct Time{
	int hr;
	int min;
	int sec;
};
void storeTime(struct Time*);
void displayTime(struct Time);
void main(){
	struct Time t1;
	storeTime(&t1);
	displayTime(t1);	
}
void storeTime(struct Time* tm){
	printf("Enter Hour: ");
	scanf("%d",&tm->hr);
	
	printf("Enter Minute: ");
	scanf("%d",&tm->min);
	
	printf("Enter Second: ");
	scanf("%d",&tm->sec);
}
void displayTime(struct Time tm){
	int sec = tm.sec + (tm.min*60) + (tm.hr*3600);
	
	tm.hr = sec/3600;
	tm.min = sec%3600;
	tm.sec = tm.min/60;
	tm.min = tm.min%60;
	
	printf("\nTime: %dhr %dmin %dsec",tm.hr,tm.min,tm.sec);
}
