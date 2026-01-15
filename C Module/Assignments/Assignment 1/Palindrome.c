//Palindrome of 3 digit
#include<stdio.h>
void main(){
	int num = 121;
	int rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
	
	if(num == rev){
		printf("%d is Palindrome Number", num);
	}else{
		printf("%d is not Palindrome Number", num);
	}

}
