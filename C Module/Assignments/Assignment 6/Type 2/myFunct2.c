#include<stdio.h>
//assignment 2 // with return type & w/o param
int operation(){
	int a,b,res;
	char ch;
	printf("Add(+):\nSub(-):\nMul(*):\nDiv(/):\nMod(%):\nEnter the Operation: ");
	scanf("%c", &ch);
	fflush(stdin);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
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
int greater(){
	int x,y,z;
	printf("Enter Three Numbers: ");
	scanf("%d%d%d",&x,&y,&z);
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
int stuDiscount(){
	char ch;
	int price, discount=0;
	printf("\nAre you student(y/n): ");
	scanf("%c",&ch);
	printf("Enter price: ");
	scanf("%d",&price);
	
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
void divisible(){
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
		printf("Number Divisible by Both 3 and 5");
	else if(num%3==0)
		printf("Number Divisible by 3 but not by 5");
	else if(num%5==0)
		printf("Number Divisible by 5 but not by 3");
	else
		printf("Number Divisible none");
}
void grade(){	
	int marks;
	printf("Enter marks of student: ");
	scanf("%d",&marks);
	
	if(marks>=75)
		printf("Pass with Distinction");
	else if(marks>=65)
		printf("Pass with First Class");
	else if(marks>=55)
		printf("Pass with Second Class");
	else if(marks>=40)
		printf("Pass");
	else if(marks<40)
		printf("Fail");
	else
		printf("Incorrect Marks..!");	
}
void triangle(){
	int side1,side2,side3;
	printf("Enter Three Sides of Triangle:\n");
	scanf("%d%d%d",&side1,&side2,&side3);
		
	if(side1==side2 && side2==side3)
		printf("Triangle is Equilateral");
		else if(side1==side2||side2==side3||side1==side3)
			printf("Triangle is Isosceles");
			else
				printf("Triangle is Scalene");
}
void main(){
	int choice;
	printf("1.Arithmatic Operation\n2.Greater Number\n3.Student Discount\n4.Divisible or Not\n5.Student Grade\n6.Triangle Type\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1)
		printf("Result: %d",operation());
	if(choice==2)
		printf("Greater Number is %d",greater());	
	if(choice==3)
		printf("\nFinal price: %d ",stuDiscount());
	if(choice==4)
		divisible();
	if(choice==5)
		grade();
	if(choice==6)
		triangle();
}
