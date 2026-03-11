#include<stdio.h>
typedef struct Complex{
    int real;
    int imaginary;
}Complex;
Complex storeComplex();
void displayComplex(Complex);
void main(){
	Complex com;
	com=storeComplex();
	displayComplex(com);
}
Complex storeComplex(){
	Complex com;
	printf("Enter the Real: ");
	scanf("%d",&com.real);
	
	printf("Enter the Imaginary: ");
	scanf("%d",&com.imaginary);
	
	return com;
}
void displayComplex(Complex com){
	printf("Complex Number: %d+%di",com.real,com.imaginary);
}