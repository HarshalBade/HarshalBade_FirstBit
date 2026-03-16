#include<stdio.h>
typedef struct Product {
    char name[50];
    float price;
    int quantity;
}Product;

void main() {
    Product product[5];
    float total=0;
	
    for(int i=0;i<5;i++) {
        printf("\nEnter Product %d\nName: ",i+1);
        scanf("%s",product[i].name);

        printf("Price: ");
        scanf("%f",&product[i].price);

        printf("Quantity: ");
        scanf("%d",&product[i].quantity);

        total += product[i].price * product[i].quantity;
    }

    printf("\nTotal Cost = %.2f",total);
}