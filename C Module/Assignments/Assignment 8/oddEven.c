#include<stdio.h>
void main(){
	int arr[7]={1,20,7,9,12,4,5};
	
	printf("Array\n");	
	for(int i=0;i<7;i++)
		printf("%d ",arr[i]);
		
	printf("\nEven: ");
	for(int i=0;i<7;i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
			
	printf("\nOdd: ");
	for(int i=0;i<7;i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
}
