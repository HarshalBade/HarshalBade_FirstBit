#include <stdio.h>
typedef struct Time {
    int hrs;
    int min;
    int sec;
}Time;
Time storeTime(){
	Time time;
    scanf("%d %d %d", &time.hrs, &time.min, &time.sec);
    
    return time;
}
void displayTime(Time time){
	printf("%02d : %02d : %02d", time.hrs, time.min, time.sec);
}
Time addTime(Time t1, Time t2) {
    Time result;

    result.sec = t1.sec + t2.sec;
    int carryMin = result.sec / 60;
    result.sec = result.sec % 60;
    
    result.min = t1.min + t2.min + carryMin;
    int carryHrs = result.min / 60;
    result.min = result.min % 60;

    result.hrs = t1.hrs + t2.hrs + carryHrs;

    return result;
}
int convertToSeconds(Time t) {
    return (t.hrs * 3600L) + (t.min * 60) + t.sec;
}
void main() {
    Time time1, time2, sum;

	printf("Enter First Time (hrs min sec): ");
	time1=storeTime();
	printf("Enter Second Time (hrs min sec): ");
	time2=storeTime();
	
	printf("\nTime 1:- ");
	displayTime(time1);
	printf("\nTime 2:- ");
	displayTime(time2);
    
    sum = addTime(time1, time2);
    printf("\n\nResult of Addition: %dhrs %dmin %dsec", sum.hrs, sum.min, sum.sec);

    int totalSec = convertToSeconds(sum);
    printf("\nTotal time in seconds: %d\n", totalSec);
}