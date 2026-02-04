// w/o return type & with param
#include<stdio.h>
void leap(int* year){
	if(*year%4==0 && *year%100!=0 || *year%400==0){
		printf("Leap Year.");
	}else{
		printf("Leap Year.");
	}
}
void evenOdd(int* num){	
	if(*num%2==0)
		printf("Number is Even");
	else
		printf("Number is odd");
}
void vote(int* age){
	if(*age >= 18)
		printf("You are eligible for vote");
	else
		printf("You are not eligible for vote");
}
void basedSalary(int* basic){
	int da, ta, hra;
	if(*basic<=5000){
		da = *basic * 0.10;
		ta = *basic * 0.20;
		hra = *basic * 0.25;
	}else{
		da = *basic * 0.15;
		ta = *basic * 0.25;
		hra = *basic * 0.30;
	}
	printf("basic: %d\nda: %d\nta: %d\nhra: %d", *basic,da,ta,hra);
	int total=*basic+da+ta+hra;	
	printf("\nTotal salary : %d", total);
}
void palindrome(int* num){
	int rem,rev=0;	
	int temp=*num;
	while(*num!=0){
		rem=*num%10;
		rev=rev*10+rem;
		*num=*num/10;	
	}
	if(temp==rev)
		printf("Palindrome Number", temp);
	else
		printf("Not Palindrome Number", temp);
}
void vowelCons(char* ch){
	if(*ch=='a'||*ch=='e'||*ch=='i'||*ch=='o'||*ch=='u'
		||*ch=='A'||*ch=='E'||*ch=='I'||*ch=='O'||*ch=='U'){
		printf("%c is Vowel", *ch);
	}
	else
		printf("%c is Consonant", *ch);
}
void main(){
	int choice;
	printf("1.Leap Year\n2.Even/Odd\n3.Voting Age\n4.Based Salary\n5.Palindrome\n6.Vowel/Consonant\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1){
		int year;
		printf("Enter Year: ");
		scanf("%d",&year);
		leap(&year);
	}
	if(choice==2){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		evenOdd(&num);
	}
	if(choice==3){
		int age;
		printf("Enter Age: ");
		scanf("%d",&age);
		vote(&age);
	}		
	if(choice==4){
		int basic;
		printf("Enter Basic: ");
		scanf("%d",&basic);
		basedSalary(&basic);
	}
	if(choice==5){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		palindrome(&num);
	}
	if(choice==6){
		char chr;
		printf("Enter Character: ");
		scanf("%c",&chr);
		vowelCons(&chr);
	}
}
