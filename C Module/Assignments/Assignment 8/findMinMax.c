#include<stdio.h>
void main(){
	int arr[6]={11,23,32,6,45,19};
	printf("Array: ");
	for(int i=0;i<6;i++)
		printf("%d ",arr[i]);
		
	int min=arr[0],max=arr[0];
	for(int i=1;i<6;i++){
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	printf("\nMinimum Number: %d\nMaximum Number: %d",min,max);
}
