#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void printEven(int*,int);
void printOdd(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
		
	printf("\nEven: ");
	printEven(arr,size);
			
	printf("\nOdd: ");
	printOdd(arr,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void printEven(int* arr,int size){
	for(int i=0;i<size;i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
}
void printOdd(int* arr,int size){
	for(int i=0;i<size;i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
}