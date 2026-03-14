#include<stdio.h>
typedef struct Complex{
    int real;
    int imaginary;
}Complex;
void storeComplex(Complex*);
void displayComplex(Complex);
void main(){
	Complex com;
	storeComplex(&com);
	displayComplex(com);
}
void storeComplex(Complex* com){
	printf("Enter Real Number: ");
	scanf("%d",&com->real);
	
	printf("Enter Imaginary Number: ");
	scanf("%d",&com->imaginary);
}
void displayComplex(Complex com){
	printf("\nComplex Number: %d+%di",com.real,com.imaginary);
}