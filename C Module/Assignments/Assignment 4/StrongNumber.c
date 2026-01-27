#include<stdio.h>
void main(){//145
	int range;
	printf("Enter Range: ");
	scanf("%d",&range);
	printf("Strong Number between 1 to %d:\n",range);
	
	for(int j=1;j<=range;j++){
		int num=j;
		int sum=0;
		while(num!=0){	
		int rem=num%10;
			int fact=1;
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}			
	 		sum=sum+fact;
	 		num=num/10;
		}
		if(j==sum)
			printf("%d ",j);
	}	
}
