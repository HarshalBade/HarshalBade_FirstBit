#include<stdio.h>
void main(){
	int a,b;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Add(+):\nSub(-):\nMul(*):\Div(/):\nMod(%):\nEnter the Operation: ");
	scanf("%c", &ch);
	
	if(ch=='+'){
		int add=a+b;
		printf("Addition of %d and %d is %d", a,b,add);
	}if(ch=='-'){
		int sub=a-b;
		printf("Subtraction of %d and %d is %d", a,b,sub);
	}if(ch=='*'){
		int mul=a*b;
		printf("Multiplication of %d and %d is %d", a,b,mul);
	}if(ch=='/'){
		int div=a/b;
		printf("Division of %d and %d is %d", a,b,div);
	}if(ch=='%'){
		int mod=a%b;
		printf("Modulas of %d and %d is %d", a,b,mod);
	}	
}
