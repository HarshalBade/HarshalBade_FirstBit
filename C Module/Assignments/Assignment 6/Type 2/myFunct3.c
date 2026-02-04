//Assignment 3 // with return type & w/o param
#include<stdio.h>
int isArmstrong(){
	int num,rem,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	int temp=num;
	while(num!=0){
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
int isFact(){
	int num,fact=1;
	printf("Enter the Number: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
		fact*=i;
	return fact;	
}
int isPerfect(){
	int num,i,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++){
		if(num%i==0)
			sum+=i;	
	}
	if(sum==num)
		return 1;
	else
		return 0;
}
int isPrime(){
	int num,i,count=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if(num<2)
		return 0;
	else
		for(i=2;i<num;i++)
			if(num%i==0)
				return 0;
		return 1;

}
int isStrong(){
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
		return 1;
	else
		return 0;
}
int digitSum(){
	int num,rem,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;	
		sum+=rem;
		num=num/10;
	}
	return sum;
}
void main(){
	int choice;
	printf("1.Armstrong\n2.Factorial\n3.Perfect Number\n4.Prime Number\n5.Strong Number\n6.Sum of Digit\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);

	if(choice==1)
		if(isArmstrong())
			printf("Armstrong Number");
		else 
			printf("Not Armstrong Number");
			
	if(choice==2)
		printf("Factorial is %d",isFact());
		
	if(choice==3)
		if(isPerfect())
			printf("Perfect Number");
		else
			printf("Not Perfect Number");
			
	if(choice==4)
		if(isPrime())
			printf("Prime Number");
		else
			printf("Not Prime Number");
			
	if(choice==5)
		if(isStrong())
			printf("Strong Number");
		else
			printf("Not Strong Number");
			
	if(choice==6)
		printf("Sum of Digit: %d", digitSum());
}
