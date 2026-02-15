#include<stdio.h>
#include<stdlib.h>
void scanArray(int*,int);
void printArray(int*,int);
void primeNum(int*,int);

void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int* arr = (int*)malloc(size * sizeof(int));
	printf("Enter Elements in Array: ");
	scanArray(arr,size);
	printf("*-Array-*\n");
	printArray(arr,size);
		
	printf("\nPrime Number:\n");		
	primeNum(arr,size);
}
void scanArray(int* arr,int size){
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
}
void printArray(int* arr,int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void primeNum(int* arr,int size){
	for(int i=0;i<size;i++){
		int n=arr[i],flag=0;
		if(n<=1)
			flag=1;
		for(int j=2;j<n;j++){
			if(n%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",n);
	} 
}
