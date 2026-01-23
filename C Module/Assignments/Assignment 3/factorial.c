#include<stdio.h>
void main(){
	int num,i,fact=1;
	printf("Enter the Number: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
		fact*=i;

	printf("Factorial of %d is %d",num,fact);
}
