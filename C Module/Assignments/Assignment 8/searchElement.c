#include<stdio.h>
void main(){
	int arr[5]={1,3,5,2,7};
	printf("*-Array-*\n");
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
	
	int element,isFound=0;
	printf("\nEnter Element to Search: ");
	scanf("%d",&element);
	
	for(int i=0;i<5;i++){
		if(arr[i]==element){
			printf("Element found at index %d",i);
			isFound=1;
			break;
		}
	}
	if(isFound==0)
		printf("Element Not Found");	
}
