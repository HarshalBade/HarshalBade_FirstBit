//1. Write a program to print sum of prime numbers in a given range. 
#include<stdio.h>
void main(){
	int range, num, sum=0;
	printf("Enter the range: ");
	scanf("%d",&range);
	
	printf("Prime Numbers : ");
	for(int i=2;i<=range;i++){  //2+3+5+7=17
		num=i;
	
	int flag=0;
	for(int i=2;i<num;i++){  
		if(num<2)
			flag=1;
			
		else if(num%i==0){  
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%d ",i);
		sum+=i;	
	}
	printf("\nSum of Prime Number : %d",sum);
}
