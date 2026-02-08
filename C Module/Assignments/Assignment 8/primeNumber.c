#include<stdio.h>
void main(){
	int arr[10];
	printf("Enter 10 Elements in Array: ");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
		
	printf("Prime Number: ");		
	for(int i=0;i<10;i++){
		int n=arr[i],flag=0;
		if(n<=1)
			flag=1;
		for(int j=2;j<n;j++){
			if(n%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",n);
	}
	
}
