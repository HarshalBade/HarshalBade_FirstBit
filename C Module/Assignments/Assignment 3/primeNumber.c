#include<stdio.h>
void main(){
	int num,i,count=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if(num<2){
		count++;
	}else{
		for(i=2;i<num;i++){
			if(num%i==0)
				count++;
		}
	}	
	if(count==0)
		printf("Prime Number");
	else
		printf("Not Prime Number");
}
