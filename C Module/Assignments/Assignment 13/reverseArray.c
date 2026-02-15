#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
int* reverse(int*,int);

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
	int* rev = reverse(arr,size);
	printArray(rev,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int* reverse(int* arr,int size){
	int* rev = (int*)malloc(size * sizeof(int));
	for(int i=0,j=size-1;j>=0;i++,j--){
		rev[i]=arr[j];	
	}
	return rev;
}
