#include<stdio.h>
void main(){	
	//Last 2 digit
	int num;	
	printf("Enter Number: ");
	scanf("%d",&num);
	int digit=num%100;
	
	printf("Last two digit : %d",digit);
	
}
