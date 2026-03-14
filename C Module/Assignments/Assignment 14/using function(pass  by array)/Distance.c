#include<stdio.h>
typedef struct Distance{
    int feet;
    int inch;
}Distance;

Distance* storeData(Distance*);
void displayData(Distance*);
void main(){
    Distance dist[5];
    storeData(dist);
    displayData(dist);
}
Distance* storeData(Distance* dist){
	for(int i=0;i<1;i++){		
		printf("Enter Feet: ");
		scanf("%d",&dist[i].feet);
		
		printf("Enter Inch: ");
		scanf("%d",&dist[i].inch);
	}
	return dist;
}
void displayData(Distance* dist){
	for(int i=0;i<1;i++){
		dist[i].inch = dist[i].inch + (dist[i].feet * 12);
		dist[i].feet = dist[i].inch/12;
		dist[i].inch = dist[i].inch%12;
		
	    printf("\nDistance: %d Feet %d inch",dist[i].feet,dist[i].inch);
	}
}
