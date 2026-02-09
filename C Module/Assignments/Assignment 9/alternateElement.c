#include<stdio.h>
void alternate(int*,int);
void main(){
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Elements in Array: ");
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
	printf("Array: ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
		
	printf("\nAlternate:\n");	
	alternate(arr,size);
}
void alternate(int* arr,int size){
	for(int i=0;i<size;i+=2)
		printf("%d ",arr[i]);
}
