#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void reverse(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	
	printf("\n*Reverse Array*\n");
	reverse(arr,size);
	printArray(arr,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void reverse(int* arr,int size){
	for(int i=0,j=size-1;i<j;i++,j--){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;	
	}
}
