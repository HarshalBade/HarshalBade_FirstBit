#include<stdio.h>
void main(){
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0){
		printf("%d is Divisible by Both 3 and 5",num);
	}else if(num%3==0){
		printf("%d is Divisible by 3 but not by 5",num);
	}else if(num%5==0){
		printf("%d is Divisible by 5 but not by 3",num);
	}else{
		printf("%d is Divisible none",num);
	}
}
