#include<stdio.h>
void scanArray(int*,int);
void printArray(int*,int);
void mergeArray(int*,int*,int*,int,int);

void main(){
	int size1,size2;
	printf("Enter Size of Array1 : ");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter Elements in Array1 : ");
	scanArray(arr1,size1);
		
    printf("Enter Size of Array2 : ");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter Elements in Array2 : ");
	scanArray(arr2,size2);
	
	int size3=size1+size2;
	int arr3[size3];
	printf("Merged Array:\n"); 
	mergeArray(arr1,arr2,arr3,size1,size2);
    printArray(arr3,size3);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void mergeArray(int* arr1,int* arr2,int* arr3,int size1,int size2){
	for(int i=0;i<size1;i++)
        arr3[i] = arr1[i];

    for(int i=0;i<size2;i++)
        arr3[size1++] = arr2[i];
}

