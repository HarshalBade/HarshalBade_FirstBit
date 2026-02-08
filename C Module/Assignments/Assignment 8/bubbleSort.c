#include<stdio.h>
void main(){
	int arr[9]={1,3,5,7,2,4,9,8,6};
	printf("Array: ");
	for(int i=0;i<9;i++)
		printf("%d ",arr[i]);
	
	for(int i=0;i<9;i++){//iteration
		for(int j=0;j<9-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nSorted Array: ");
	for(int i=0;i<9;i++)
		printf("%d ",arr[i]);	
}
