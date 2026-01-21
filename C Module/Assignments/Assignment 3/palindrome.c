#include<stdio.h>
void main(){
	int num,rem;
	int rev;
	printf("Enter the Number: ");
	scanf("%d",&num);
	int temp=num;
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	if(temp==rev)
		printf("Number is Palindrome");
	else
		printf("Number is not Palindrome");	
}
