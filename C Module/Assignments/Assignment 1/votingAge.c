#include<stdio.h>
void main(){
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	if(age >= 18){
		printf("You are eligible for vote.");
	}else{
		printf("You are not eligible for vote.");
	}
}
