//first+last digit addition
#include<stdio.h>
void main(){
	int num,rev,sum=0;
	int d1,d2;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	d1=num%10;
	while(num!=0){
		int rem=num%10;	
		rev=rev*10+rem;
		num=num/10;
	}
	d2=rev%10;
	sum=d1+d2;
	printf("Sum of First & Last Digit: %d",sum);
}
