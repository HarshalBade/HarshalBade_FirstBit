#include<stdio.h>
void main(){
	int arr[6]={1,2,3,4,5,6};
	
	printf("Array\n");	
	for(int i=0;i<6;i++)
		printf("%d ",arr[i]);
		
	printf("\nAlternate:\n");	
	for(int i=0;i<6;i+=2)
		printf("%d ",arr[i]);
}
