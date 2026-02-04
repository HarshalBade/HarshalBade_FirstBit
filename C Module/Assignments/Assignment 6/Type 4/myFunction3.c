//Assignment 3 // with return type & with param
#include<stdio.h>
int pow(int,int);
int getCount(int);
int getCount(int num){
	int count=0;
	while(num>0){
		count++;
		num=num/10;
	}
	return count;
}
int pow(int base,int expo){
	int res=1;
	for(int i=1;i<=expo;i++)
		res*=base;
	return res;
}
int isArmstrong(int num){
	int rem,sum=0;
	int temp=num;
	int count=getCount(num);
	
	while(num!=0){
		rem=num%10;
		sum+=pow(rem,count);
		num=num/10;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
int isFact(int num){
	int fact=1;
	for(int i=1;i<=num;i++)
		fact*=i;
	return fact;	
}
int isPerfect(){
	int num,i,sum=0;
	for(i=1;i<num;i++){
		if(num%i==0)
			sum+=i;	
	}
	if(sum==num)
		return 1;
	else
		return 0;
}
int isPrime(int num){
	int count=0;
	if(num<2)
		return 0;
	else
		for(int i=2;i<num;i++)
			if(num%i==0)
				return 0;
		return 1;
}
int isStrong(int num){
	int rem,sum=0;
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
		return 1;
	else
		return 0;
}
int digitSum(int num){
	int rem,sum=0;
	while(num!=0){
		rem=num%10;	
		sum+=rem;
		num=num/10;
	}
	return sum;
}
void main(){
	int choice,num;
	printf("1.Armstrong\n2.Factorial\n3.Perfect Number\n4.Prime Number\n5.Strong Number\n6.Sum of Digit\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if(choice==1)
		if(isArmstrong(num))
			printf("Armstrong Number");
		else 
			printf("Not Armstrong Number");
			
	if(choice==2)
		printf("Factorial is %d",isFact(num));
		
	if(choice==3)
		if(isPerfect(num))
			printf("Perfect Number");
		else
			printf("Not Perfect Number");
			
	if(choice==4)
		if(isPrime(num))
			printf("Prime Number");
		else
			printf("Not Prime Number");
			
	if(choice==5)
		if(isStrong(num))
			printf("Strong Number");
		else
			printf("Not Strong Number");
			
	if(choice==6)
		printf("Sum of Digit: %d", digitSum(num));
}
