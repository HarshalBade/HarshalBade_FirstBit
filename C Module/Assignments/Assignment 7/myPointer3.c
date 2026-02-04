#include<stdio.h>
// w/o return type & with param
void isArmstrong(int* num){
	int rem,sum=0;
	int temp=*num;
	while(*num!=0){
		rem=*num%10;
		sum+=rem*rem*rem;
		*num=*num/10;
	}
	if(temp==sum)
		printf("Number is Armstrong");
	else
		printf("Number is not Armstrong");
}
void isFact(int* num){
	int fact=1;
	for(int i=1;i<=*num;i++)
		fact*=i;
	printf("Factorial of %d is %d",*num,fact);
}
void isPerfect(int* num){
	int sum=0;	
	for(int i=1;i<*num;i++){
		if(*num%i==0)
			sum+=i;	
	}
	if(sum==*num)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
}
void isPrime(int* num){
	int count=0;
	if(*num<2)
		count++;
	else{
		for(int i=2;i<*num;i++){
			if(*num%i==0)
				count++;
		}
	}	
	if(count==0)
		printf("Prime Number");
	else
		printf("Not Prime Number");
}
void isStrong(int* num){
	int rem,sum=0;
	int temp=*num;

	while(*num!=0){
		rem=*num%10;	
		*num=*num/10;
		
		int i=1,fact=1;
		while(i<=rem){
			fact*=i;
			i++;
		}
		sum+=fact;
	}
	if(temp==sum)
		printf("Strong Number");
	else
		printf("Not Strong Number");
}
void digitSum(int* num){
	int rem,sum=0;
	
	while(*num!=0){
		rem=*num%10;	
		sum+=rem;
		*num=*num/10;
	}
	printf("Sum of Digits: %d",sum);
}
void table(int* num){
	for(int i=1;i<=10;i++)
		printf("%d \n",*num*i);
}
void main(){
	int choice;
	printf("1.Armstrong\n2.Factorial\n3.Perfect Number\n4.Prime Number\n");
	printf("5.Strong Number\n6.Sum of Digit\n7.Table\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);

	if(choice==1)
		isArmstrong(&num);
	else if(choice==2)
		isFact(&num);
	else if(choice==3)
		isPerfect(&num);	
	else if(choice==4)
		isPrime(&num);
	else if(choice==5)
		isStrong(&num);
	else if(choice==6)
		digitSum(&num);
	else if(choice==7)
		table(&num);
	else
		printf("Invalid Choice..!");
}
