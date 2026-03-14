#include<stdio.h>
typedef struct Time{
	int hr;
	int min;
	int sec;
}Time;
Time* storeTime(Time*, int);
void displayTime(Time*, int);
void main(){
	Time time[5];
	int size;
	printf("Enter number of time to store: ");
	scanf("%d",&size);
	printf("\nEnter Time: ");
	storeTime(time,size);
	printf("\n* Time Detail *");
	displayTime(time,size);	
}
Time* storeTime(Time* time,int size){
	for(int i=0;i<size;i++){
		printf("\nHour: ");
		scanf("%d",&time[i].hr);
		
		printf("Minute: ");
		scanf("%d",&time[i].min);
		
		printf("Second: ");
		scanf("%d",&time[i].sec);
	}
	return time;
}
void displayTime(Time* time, int size){
	for(int i=0;i<size;i++){
		int sec = time[i].sec + (time[i].min*60) + (time[i].hr*3600);
	
		time[i].hr = sec/3600;
		time[i].min = sec%3600;
		time[i].sec = time[i].min/60;
		time[i].min = time[i].min%60;
		
		printf("\nTime: %dhr %dmin %dsec",time[i].hr,time[i].min,time[i].sec);
	}	
}
