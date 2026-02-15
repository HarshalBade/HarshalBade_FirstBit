#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
int* sumOfArray(int*,int*,int,int);

void main(){
	int size1,size2;
	printf("Enter Size of Array1 : ");
	scanf("%d",&size1);
	int* arr1 = (int*)malloc(size1 * sizeof(int));
	printf("Enter Elements in Array1 : ");
	scanArray(arr1,size1);
		
    printf("Enter Size of Array2 : ");
	scanf("%d",&size2);
	int* arr2 = (int*)malloc(size2 * sizeof(int));
	printf("Enter Elements in Array2 : ");
	scanArray(arr2,size2);
	
	printf("Sum of Array : ");
	int* arr3 = sumOfArray(arr1,arr2,size1,size2);//call
	int max = size1 > size2 ? size1 : size2;
	printArray(arr3, max);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int* sumOfArray(int* arr1,int* arr2,int size1,int size2){
	int max = size2>size1 ? size2 : size1;
	int min = size2<size1 ? size2 : size1;
	int* arr3 = (int*)malloc(max * sizeof(int));
	
	for(int i=0;i<min;i++)
		arr3[i]=arr1[i]+arr2[i];
	
	for(int i=min;i<max;i++){
		if(size1>size2)
			arr3[i]=arr1[i];
		else
			arr3[i]=arr2[i];
	}
	return arr3;
}
