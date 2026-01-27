#include<stdio.h>
void main(){
	int range;
	printf("Enter the Range: ");//1-50
	scanf("%d",&range);
	printf("Perfect Number between 1 to %d:\n",range);
	
	for(int j=1;j<=range;j++){
		int sum=0;
		for(int i=1;i<j;i++){
			if(j%i==0)
				sum+=i;	
		}
		if(sum==j)
			printf("%d ",sum);
	}
	
}
