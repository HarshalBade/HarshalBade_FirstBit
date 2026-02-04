// with return type & with param
//Assignment 1
#include<stdio.h>
int isLeap(int year){
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
int isEvenOdd(int num){
	if(num%2==0)
		return 1;
	else
		return 0;
}
int vote(int age){	
	if(age >= 18)
		return 1;
	else
		return 0;
}
int basedSalary(int basic){
	int da, ta, hra;
	if(basic<=5000){
		da = basic * 0.10;
		ta = basic * 0.20;
		hra = basic * 0.25;
	}else{
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	printf("da: %d\nta: %d\nhra: %d",da,ta,hra);
	return basic+da+ta+hra;	
}

int isPalindrome(int num){
	int rem,rev=0;
	int temp=num;
	
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;	
	}
	if(temp==rev)
		return 1;
	else
		return 0;
}
int isVowelCons(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
		||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		return 1;
	else
		return 0;
}
void main(){
	int choice,num;
	printf("1.Leap Year\n2.Even/Odd\n3.Voting Age\n4.Based Salary\n5.Palindrome\n6.Vowel/Consonant\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1){
		int year;
		printf("Enter Year: ");
		scanf("%d",&year);
		
		if(isLeap(year))
			printf("Leap Year");
		else
			printf("Not Leap Year");
	}
	else if(choice==2){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		isEvenOdd(num) ? printf("Even Number") : printf("Odd Number");	
	}
	else if(choice==3){
		int age;
		printf("Enter Age: ");
		scanf("%d",&age);
		if(vote(age))
			printf("Eligible for Vote");
		else
			printf("Not Eligible for Vote");
	}	
	else if(choice==4){
		int basic;
		printf("Enter Basic: ");
		scanf("%d",&basic);
		//int total=basedSalary();
		printf("\nTotal salary : %d", basedSalary(basic));
	}
	else if(choice==5){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		if(isPalindrome(num))
			printf("Palindrome Number");
		else
			printf("Not Palindrome Number");
	}
	else if(choice==6){
		char ch;
		printf("Enter Character: ");
		scanf("%c",&ch);
		if(isVowelCons(ch))
			printf("Vowel");
		else
			printf("Consonant");
	}
	else 
		printf("Invalid Choice..!");
}
