#include<stdio.h>
void main(){
	int celsius=30;	
	printf("Temperature : %d Celsius\n", celsius);

	float fehre = (celsius * 9/5) + 32;
	printf("Temperature : %f Fahrenheit", fehre);	
}
