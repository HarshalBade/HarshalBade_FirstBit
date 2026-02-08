#include<stdio.h>
void main(){
	int arr[6]={2,4,6,1,7,8};	
	printf("*-Array-*\n");
	for(int i=0;i<6;i++)
		printf("%d ",arr[i]);
		
	int sum=0;
	for(int i=0;i<6;i++)
		sum+=arr[i];
	printf("\nSum of Element: %d",sum);
}