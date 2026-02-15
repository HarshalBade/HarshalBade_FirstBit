#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
int* sortArray(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	int* arr = (int*)malloc(size * sizeof(int));
	
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
	printf("\nSorted Array:\n");
	int* sort = sortArray(arr,size);
	printArray(sort,size);	
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int* sortArray(int* arr,int size){
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
	return arr;
}
