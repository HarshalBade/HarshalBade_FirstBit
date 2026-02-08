#include<stdio.h>
void main(){
	int size1,size2;
	printf("Enter Size of Array1: ");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter element in Array: ");//1 2 3 4 5
	for(int i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	
	printf("Enter Size of Array2: ");//1 2 3
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter element in Array: ");
	for(int i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	
	//logic//
	int max = size2>size1 ? size2 : size1;
	int min = size2<size1 ? size2 : size1;
	int arr3[max];
	
	for(int i=0;i<min;i++)
		arr3[i]=arr1[i]+arr2[i];
	
	for(int i=min;i<max;i++){
		if(size1>size2)
			arr3[i]=arr1[i];
		else
			arr3[i]=arr2[i];
	}
	
	printf("Sum of Array: ");
	for(int i=0;i<max;i++)
		printf("%d ",arr3[i]);
}
