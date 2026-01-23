#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	int temp=num;

	while(num!=0){
		rem=num%10;	
		num=num/10;
		
		int i=1,fact=1;
		while(i<=rem){
			fact*=i;
			i++;
		}
		sum+=fact;
	}
	if(temp==sum)
		printf("Strong Number");
	else
		printf("Not Strong Number");
		
}
