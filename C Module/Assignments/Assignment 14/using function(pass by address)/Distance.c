#include<stdio.h>
typedef struct Distance{
    int feet;
    int inch;
}Distance;
void storeData(Distance*);
void displayData(Distance);
void main(){
    Distance dist;
    storeData(&dist);
    displayData(dist);
}
void storeData(Distance* dist){
	printf("Enter Feet: ");
	scanf("%d",&dist->feet);
	
	printf("Enter Inch: ");
	scanf("%d",&dist->inch);
}
void displayData(Distance dist){
	dist.inch = dist.inch + (dist.feet * 12);
	dist.feet = dist.inch/12;
	dist.inch = dist.inch%12;
	
    printf("\nDistance: %d Feet %d inch",dist.feet,dist.inch);
}
