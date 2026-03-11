#include<stdio.h>
struct Time{
	int hr;
	int min;
	int sec;
};
struct Time storeTime();
void displayTime(struct Time);
void main(){
	struct Time t1;
	
	t1=storeTime();
	displayTime(t1);
	
	
}
struct Time storeTime(){
	struct Time tm;
	printf("Enter the Hour: ");
	scanf("%d",&tm.hr);
	
	printf("Enter the Minute: ");
	scanf("%d",&tm.min);
	
	printf("Enter the Second: ");
	scanf("%d",&tm.sec);
	
	return tm;
}
void displayTime(struct Time tm){
	int sec = tm.sec + (tm.min*60) + (tm.hr*3600);
	
	tm.hr = sec/3600;
	tm.min = sec%3600;
	tm.sec = tm.min/60;
	tm.min = tm.min%60;
	
	printf("Time: %dhr %dmin %dsec",tm.hr,tm.min,tm.sec);
}
