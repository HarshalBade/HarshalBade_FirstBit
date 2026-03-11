#include<stdio.h>
typedef struct Distance{
    int feet;
    int inch;
}Distance;
Distance storeData();
void displayData(Distance);
void main(){
    Distance dist;

    dist=storeData();
    displayData(dist);
}
Distance storeData(){
	Distance dist;
	printf("Enter the Feet: ");
	scanf("%d",&dist.feet);
	
	printf("Enter the Inch: ");
	scanf("%d",&dist.inch);
	
	return dist;
}
void displayData(Distance dist){
	dist.inch = dist.inch + (dist.feet * 12);
	dist.feet = dist.inch/12;
	dist.inch = dist.inch%12;
	
    printf("\nDistance: %d Feet %d inch",dist.feet,dist.inch);
}
