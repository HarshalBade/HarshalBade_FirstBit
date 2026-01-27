#include<stdio.h>
void main(){
	int choice;
	int num;
	printf("Press   \n1.To check number is even or odd\n2.To check number is prime or not\n3.To check number is pallindrome or not\n4.To check number is positive, negative or zero\n5.To reverse a number\n6.To find sum of digits\n\nChoice: ");
	scanf("%d",&choice);
	
	if(choice==1){
	printf("**Check number is Even or Odd**\nEnter Number: ");
	scanf("%d",&num);
		if(num%2==0)
			printf("Number is Even");
		else
			printf("Number is Odd");
	}
	
	if(choice==2){
	int count=0;
	printf("**Check number is Prime or not**\nEnter Number: ");
	scanf("%d",&num);
	
		if(num<2){
			count++;
		}else{
			for(int i=2;i<num;i++){
				if(num%i==0)
					count++;
			}
		}	
		if(count==0)
			printf("Prime Number");
		else
			printf("Not Prime Number");		
		}
	
	if(choice==3){
	int rem,rev;
	printf("**Check number is Palindrome or not**\nEnter Number: ");
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
	
	if(choice==4){
	printf("**Check number is positive, negative or zero** \nEnter Number: ");
	scanf("%d",&num);
		if(num>0)
			printf("Number is Positive");
		else if(num<0)
			printf("Number is Negative");
		else
			printf("Number is Zero");		
	}
	if(choice==5){
	printf("**Reverse the number**\nEnter Number: ");
	scanf("%d",&num);
	int rem,rev=0;
		while(num!=0){
			rem=num%10;//121
			rev=rev*10+rem;
			num/=10;
		}
		printf("Reverse Number: %d",rev);
	}
	
	if(choice==6){
	printf("**Find sum of digits**\nEnter Number: ");
	scanf("%d",&num);
	int rem,sum=0;
		while(num!=0){
			rem=num%10;
			sum+=rem;
			num/=10;
		}	
		printf("Sum of digits: %d",sum);	
	}
}
