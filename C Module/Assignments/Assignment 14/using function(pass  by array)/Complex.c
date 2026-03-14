#include<stdio.h>
typedef struct Complex{
    int real;
    int imaginary;
}Complex;

Complex* storeComplex(Complex* ,int);
void displayComplex(Complex*, int);
void main(){
	Complex com[5];
	int size;
	printf("How many Complex Number you want to create: ");
	scanf("%d",&size);
	storeComplex(com,size);
	displayComplex(com,size);
}
Complex* storeComplex(Complex* com,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Real: ");
		scanf("%d",&com[i].real);
		
		printf("Enter Imaginary: ");
		scanf("%d",&com[i].imaginary);
	}
	return com;
}
void displayComplex(Complex* com, int size){
	for(int i=0;i<size;i++){
		printf("\nComplex Number: %d+%di",com[i].real,com[i].imaginary);
	}	
}