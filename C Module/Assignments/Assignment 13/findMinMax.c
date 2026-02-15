#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
void findMinMax(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int* arr=(int*)malloc(size * sizeof(int));
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	
	findMinMax(arr,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void findMinMax(int* arr,int size){
	int min=arr[0];
	int max=arr[0];
	
	for(int i=1;i<size;i++){
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	printf("\nMinimum number: %d",min);
	printf("\nMaximum number: %d",max);
}
