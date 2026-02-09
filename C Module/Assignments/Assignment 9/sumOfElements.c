#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void sumOfElement(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	
	sumOfElement(arr,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void sumOfElement(int* arr,int size){
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=arr[i];
	printf("\nSum of Element: %d",sum);
}
