// Write a program to accept string from user and replace one character from special symbol. 

#include<stdio.h>
void main(){
	char str[20];
	char ch;
	char sym;
	printf("Enter the String : ");
	scanf("%s",str);
	printf("Enter which character to replace: ");
	scanf(" %c",&ch);
	printf("Enter symbol to replace: ");
	scanf(" %c",&sym);
	
	for(int i=0;str[i]!='\0';i++)
		if(str[i]==ch)
			str[i]=sym;

	printf("Replaced String : %s",str);
}