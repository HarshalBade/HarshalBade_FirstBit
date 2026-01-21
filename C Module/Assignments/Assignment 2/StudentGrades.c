#include<stdio.h>
void main(){
	int marks;
	printf("Enter marks of student: ");
	scanf("%d",&marks);
	
	if(marks>=75){
		printf("Pass with Distinction");
	}else if(marks>=65){
		printf("Pass with First Class");
	}else if(marks>=55){
		printf("Pass with Second Class");
	}else if(marks>=40){
		printf("Pass");
	}else if(marks<40){
		printf("Fail");
	}else{
		printf("Incorrect Marks..!");
	}	
}
