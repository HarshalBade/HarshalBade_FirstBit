#include<stdio.h>
void main(){
	char ch;
	int price, discount=0;
	printf("\nAre you student(y/n): ");
	scanf("%c",&ch);
	printf("Enter price: ");
	scanf("%d",&price);
	
	if(ch=='y' || ch=='Y'){
		if(price>500){
			printf("Puchased: %d - Get 20perc Discount",price);
			discount = price*0.20;
		}else{
			printf("Puchased: %d - Get 10perc Discount",price);
			discount = price*0.10;
		}
	}else if(ch=='n' || ch=='N'){
		if(price>600){
			printf("Puchased: %d - Get 15perc Discount",price);
			discount = price*0.15;
		}else{
			printf("Puchased more than 600 you will get Discount");
		}
	}else{
		printf("Incorrect input");
	}
	int finalPrice = price-discount;
	printf("\nFinal price: %d with Discount %d",finalPrice,discount);
}
