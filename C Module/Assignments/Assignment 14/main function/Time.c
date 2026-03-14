#include<stdio.h>
struct Time{
	int hr;
	int min;
	int sec;
};

void main(){
	struct Time t1;
	
	printf("Enter Hour: ");
	scanf("%d",&t1.hr);
	
	printf("Enter Minute: ");
	scanf("%d",&t1.min);
	
	printf("Enter Second: ");
	scanf("%d",&t1.sec);
	
	int sec = t1.sec + (t1.min*60) + (t1.hr*3600);
	
	t1.hr = sec/3600;
	t1.min = sec%3600;
	t1.sec = t1.min/60;
	t1.min = t1.min%60;
	
	printf("\nTime: %dhr %dmin %dsec",t1.hr,t1.min,t1.sec);
}