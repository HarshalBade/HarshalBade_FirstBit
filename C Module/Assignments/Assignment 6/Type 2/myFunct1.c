// with return type & w/o param
//Assignment 1
#include<stdio.h>
int isLeap(){
	int year;
	printf("Enter Year: ");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
int isEvenOdd(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	if(num%2==0)
		return 1;
	else
		return 0;
}
int vote(){
	int age;
	printf("Enter Age: ");
	scanf("%d",&age);	
	if(age >= 18)
		return 1;
	else
		return 0;
}

int basedSalary(){
	int basic;
	printf("Enter Basic: ");
	scanf("%d",&basic);
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
	printf("basic: %d\nda: %d\nta: %d\nhra: %d", basic,da,ta,hra);
	return basic+da+ta+hra;	
}

int isPalindrome(){
	int num,rem,rev=0;;
	printf("Enter Number: ");
	scanf("%d",&num);
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
int isVowelCons(){
	char ch;
	printf("Enter Character: ");
	scanf("%c",&ch);
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
	
	if(choice==1)
		if(isLeap())
			printf("Leap Year");
		else
			printf("Not Leap Year");
	
	if(choice==2)
		isEvenOdd() ? printf("Even Number") : printf("Odd Number");

	if(choice==3)
		if(vote())
			printf("Eligible for Vote");
		else
			printf("Not Eligible for Vote");
			
	if(choice==4){
		//int total=basedSalary();
		printf("\nTotal salary : %d", basedSalary());
	}
	if(choice==5)
		if(isPalindrome())
			printf("Palindrome Number");
		else
			printf("Not Palindrome Number");

	if(choice==6){
		if(isVowelCons())
			printf("Vowel");
		else
			printf("Consonant");
	}
}
