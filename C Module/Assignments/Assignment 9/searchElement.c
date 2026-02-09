#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void searchElement(int*,int,int);

void main(){
	int size,element;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	
	printf("\nEnter Element to Search: ");
	scanf("%d",&element);
	searchElement(arr,size,element);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void searchElement(int*arr,int size,int element){
	int isFound=0;
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			printf("Element found at index %d",i);
			isFound=1;
			break;
		}
	}
	if(isFound==0)
		printf("Element Not Found");
}