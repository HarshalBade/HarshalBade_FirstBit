#include<stdio.h>
void main(){
	int time = 345;
	int hour = time/60;
	int min = time%60;
	printf("Time is %d Hour %d Minutes", hour,min);
}
