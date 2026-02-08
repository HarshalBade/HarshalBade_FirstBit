#include<stdio.h>
void main(){
	int arr[5]={11,12,13,14,15};
	printf("Array: ");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
		
	printf("\nReverse Array: ");
	for(int i=4;i>=0;i--)
		printf("%d ",arr[i]);
	}