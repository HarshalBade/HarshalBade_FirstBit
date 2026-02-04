#include<stdio.h>
//assignment 2 //with return type & with param
int operation(int a,int b){
	int res;
	char ch;
	printf("Add(+):\nSub(-):\nMul(*):\nDiv(/):\nMod(%):\nEnter the Operation: ");
	scanf("%c", &ch);
	
	if(ch=='+')
		return a+b;		
	if(ch=='-')
		return a-b;
	if(ch=='*')
		return a*b;
	if(ch=='/')
		return a/b;
	if(ch=='%')
		return a%b;
}
int greater(int x,int y,int z){
	if(x>y)
		if(x>z)
			return x;
		else
			return z;
	else if(y>z)
		return y;
	else
		return z;	
}
int stuDiscount(int price){
	char ch;
	int discount=0;
	printf("Are you student(y/n): ");
	scanf("%c",&ch);
	
	if(ch=='y' || ch=='Y'){
		if(price>500){
			printf("Puchased: %d - Get 20perc Discount",price);
			discount = price*0.20;
		}else{
			printf("Puchased: %d - Get 10perc Discount",price);
			discount = price*0.10;
		}
	}else if(ch=='n' || ch=='N'){
		if(price>600){
			printf("Puchased: %d - Get 15perc Discount",price);
			discount = price*0.15;
		}else
			printf("Puchased more than 600 you will get Discount");
	}else
		printf("Incorrect input");
	
	return price-discount;
}
int divisible(int num){
	if(num%3==0 && num%5==0)
		return 3;
	else if(num%3==0)
		return 2;
	else if(num%5==0)
		return 1;
	else
		return 0;
}
int grade(int marks){	
	if(marks>=75)
		return 5;
	else if(marks>=65)
		return 4;
	else if(marks>=55)
		return 3;
	else if(marks>=40)
		return 2;
	else if(marks<40)
		return 1;
	else
		return 0;
}
int triangle(int side1,int side2,int side3){
	if(side1==side2 && side2==side3)
		return 3;
		else if(side1==side2||side2==side3||side1==side3)
			return 2;
			else
				return 1;
}
void main(){
	int choice;
	printf("1.Arithmatic Operation\n2.Greater Number\n3.Student Discount\n4.Divisible or Not\n5.Student Grade\n6.Triangle Type\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1){
		int a,b;
		printf("Enter two numbers: ");
		scanf("%d%d",&a,&b);
		fflush(stdin);
		printf("Result: %d",operation(a,b));
	}
	if(choice==2){
		int x,y,z;
		printf("Enter Three Numbers: ");
		scanf("%d%d%d",&x,&y,&z);
		printf("Greater Number is %d",greater(x,y,z));
	}	
	if(choice==3){
		int price;
		printf("Enter price: ");
		scanf("%d",&price);
		fflush(stdin);
		printf("\nFinal price: %d ",stuDiscount(price));
	}
	if(choice==4){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		divisible(num);
		
		if(divisible(num)==3)
			printf("Number Divisible by Both 3 and 5");
		else if(divisible(num)==2)
			printf("Number Divisible by 3 but not by 5");
		else if(divisible(num)==1)
			printf("Number Divisible by 5 but not by 3");
		else 
			printf("Number Divisible none");
	}
	if(choice==5){
		int marks;
		printf("Enter marks of student: ");
		scanf("%d",&marks);
		grade(marks);
		
		if(grade(marks)==5)
			printf("Pass with Distinction");
		else if(grade(marks)==4)
			printf("Pass with First Class");
		else if(grade(marks)==3)
			printf("Pass with Second Class");
		else if(grade(marks)==2)
			printf("Pass");
		else if(grade(marks)==1)
			printf("Fail");
		else
		 	printf("Invalid Choice");
	}
	if(choice==6){
		int side1,side2,side3;
		printf("Enter Three Sides of Triangle:\n");
		scanf("%d%d%d",&side1,&side2,&side3);
		triangle(side1,side2,side3);
		switch(triangle(side1,side2,side3)){
			case 3:
				printf("Triangle is Equilateral");
				break;
			case 2:
				printf("Triangle is Isosceles");
				break;
			case 1:
				printf("Triangle is Scalene");
				break;
		}
	}
}
