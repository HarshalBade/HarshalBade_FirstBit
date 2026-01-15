#include<stdio.h>
void main(){
	//Time converted into seconds
	int hour,min,sec;
	printf("Enter Hour: ");
	scanf("%d",&hour);
	printf("Enter Minute: ");
	scanf("%d",&min);
	printf("Enter Seconds: ");
	scanf("%d",&sec);
	
	int total = (min*60)+(hour*3600)+sec;
	printf("Time is %d sec", total);	
}


