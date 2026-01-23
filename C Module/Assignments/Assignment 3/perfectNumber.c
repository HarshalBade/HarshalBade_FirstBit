//6=1+2+3//28=1+2+4+7+14
#include<stdio.h>
void main(){
	int num,i,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++){
		if(num%i==0)
			sum+=i;	
	}
	if(sum==num)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
}
