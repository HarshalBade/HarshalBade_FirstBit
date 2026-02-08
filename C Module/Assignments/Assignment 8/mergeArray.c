#include<stdio.h>
void main(){
	int size1,size2;
	
	printf("Enter Size of Array1 : ");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter Elements in Array1 : ");
	for(int i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
		
    printf("Enter Size of Array2 : ");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter Elements in Array2 : ");
	for(int i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	
	int size3=size1+size2;
	int arr3[size3];

    for(int i=0;i<size1;i++)
        arr3[i] = arr1[i];

    for(int i=0;i<size2;i++)
        arr3[size1++] = arr2[i];
	
	printf("Merged Array:\n"); 
    for(int i=0;i<size3;i++)
        printf("%d ",arr3[i]);
}

