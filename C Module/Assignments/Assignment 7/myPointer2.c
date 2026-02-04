// w/o return type & with param
#include<stdio.h>
void operation(int* a,int* b){
	int res;
	char ch;
	fflush(stdin);
	printf("Add(+):\nSub(-):\nMul(*):\nDiv(/):\nMod(%):\nEnter the Operation: ");
	scanf("%c", &ch);
	
	if(ch=='+')
		res=*a+*b;
	if(ch=='-')
		res=*a-*b;
	if(ch=='*')
		res=*a * *b;
	if(ch=='/')
		res=*a/ *b;
	if(ch=='%')
		res=*a % *b;
	printf("Result : %d",res);
}
void divisible(int* num){
	if(*num%3==0 && *num%5==0)
		printf("Number Divisible by Both 3 and 5");
	else if(*num%3==0)
		printf("Number Divisible by 3 but not by 5");
	else if(*num%5==0)
		printf("Number Divisible by 5 but not by 3");
	else
		printf("Number Divisible none");
}
void greater(int* x,int* y,int* z){
	if(*x>*y){
		if(*x>*z)
			printf("Greater Number: %d",*x);
		else
			printf("Greater Number: %d",*z);
	}else{
		if(*y>*z)
			printf("Greater Number: %d",*y);
		else
			printf("Greater Number: %d",*z);	
	}
}
void grade(int* marks){	
	if(*marks>=75)
		printf("Pass with Distinction");
	else if(*marks>=65)
		printf("Pass with First Class");
	else if(*marks>=55)
		printf("Pass with Second Class");
	else if(*marks>=40)
		printf("Pass");
	else if(*marks<40)
		printf("Fail");
	else
		printf("Incorrect Marks..!");	
}
void triangle(int* s1,int* s2,int* s3){		
	if(*s1==*s2 && *s2==*s3)
		printf("Triangle is Equilateral");
		else if(*s1==*s2||*s2==*s3||*s1==*s3)
			printf("Triangle is Isosceles");
			else
				printf("Triangle is Scalene");
}
void discount(int* price){
	char ch;
	int discount=0;
	fflush(stdin);
	printf("\nAre you student(y/n): ");
	scanf("%c",&ch);

	if(ch=='y' || ch=='Y'){
		if(*price>500){
			printf("Puchased: %d - Get 20perc Discount",*price);
			discount = *price*0.20;
		}else{
			printf("Puchased: %d - Get 10perc Discount",*price);
			discount = *price*0.10;
		}
	}else if(ch=='n' || ch=='N'){
		if(*price>600){
			printf("Puchased: %d - Get 15perc Discount",*price);
			discount = *price*0.15;
		}else{
			printf("Puchased more than 600 you will get Discount");
		}
	}else{
		printf("Incorrect input");
	}
	int finalPrice = *price-discount;
	printf("\nFinal price: %d with Discount %d",finalPrice,discount);
}
void main(){
	int choice;
	printf("1.Arithmatic Operation\n2.Divisible or Not\n3.Greater Number\n4.Student Grade\n5.Triangle Type\n6.Student Discount\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1){
		int a,b;
		printf("Enter two numbers: ");
		scanf("%d%d",&a,&b);
		operation(&a,&b);
	}
	if(choice==2){
		int num;
		printf("Enter the Number: ");
		scanf("%d",&num);
		divisible(&num);
	}
	if(choice==3){
		int x,y,z;
		printf("Enter the Three Numbers:\n");
		scanf("%d%d%d",&x,&y,&z);
		greater(&x,&y,&z);
	}	
	if(choice==4){
		int marks;
		printf("Enter marks of student: ");
		scanf("%d",&marks);
		grade(&marks);
	}
	if(choice==5){
		int s1,s2,s3;
		printf("Enter Three Sides of Triangle:\n");
		scanf("%d%d%d",&s1,&s2,&s3);
		triangle(&s1,&s2,&s3);
	}	
	if(choice==6){
		int price;
		printf("Enter price: ");
		scanf("%d",&price);
		discount(&price);
	}
}
