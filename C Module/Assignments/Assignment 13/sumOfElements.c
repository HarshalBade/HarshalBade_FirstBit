#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
int sumOfElement(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(size * sizeof(int));
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	
	printf("\nSum Of Elements: %d",sumOfElement(arr,size));
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int sumOfElement(int* arr,int size){
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	
	return sum;
}
