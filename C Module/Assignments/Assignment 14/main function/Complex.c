#include<stdio.h>
typedef struct Complex{
    int real;
    int imaginary;
}Complex;

void main(){
	Complex com;
	printf("Enter the Real: ");
	scanf("%d",&com.real);
	
	printf("Enter the Imaginary: ");
	scanf("%d",&com.imaginary);
	
	printf("\nComplex Number: %d+%di",com.real,com.imaginary);
}