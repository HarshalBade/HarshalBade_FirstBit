#include<stdio.h>
void main(){
	int num1=10, num2=25, temp;

	printf("Num1 = %d", num1);
	printf("\nNum2 = %d", num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\n* After Swap * \nNum1 = %d", num1);
	printf("\nNum2 = %d",num2);
}
