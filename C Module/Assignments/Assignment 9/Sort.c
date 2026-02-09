#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void sortArray(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	int arr[size];
	
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	printf("\nSorted Array:\n");
	sortArray(arr,size);
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
void sortArray(int* arr,int size){
	//iteration
	for(int i=0;i<size;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
