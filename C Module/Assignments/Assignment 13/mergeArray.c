#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
int* mergeArray(int*,int*,int,int,int);

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
	
	int size3=size1+size2;
	printf("Merged Array:\n"); 
	int* arr3 = mergeArray(arr1,arr2,size1,size2,size3);
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
int* mergeArray(int* arr1,int* arr2,int size1,int size2,int size3){
	int* arr3 = (int*)malloc(size3 * sizeof(int));
	for(int i=0;i<size1;i++)
        arr3[i] = arr1[i];

    for(int i=0;i<size2;i++)
        arr3[size1+i] = arr2[i];
        
    return arr3;
}

