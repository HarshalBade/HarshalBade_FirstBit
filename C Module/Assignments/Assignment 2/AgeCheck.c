#include<stdio.h>
void main(){
	int age;
	printf("Enter the Age: ");
	scanf("%d",&age);
	
	if(age>=0 && age<12){
		printf("You are Child");
	}else if(age>=12 && age<=19){
		printf("You are Teenager");
	}else if(age>=20 && age<=59){
		printf("You are Adult");
	}else if(age>=60){
		printf("You are Senior");
	}else{
		printf("Age is incorrect");
	}
}
