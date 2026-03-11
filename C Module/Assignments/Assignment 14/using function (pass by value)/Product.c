#include<stdio.h>
#include<string.h>
typedef struct Product{
    int id;
    char name[20];
    int quantity;
    float price;
}Product;
Product storeProduct();
void displayProduct(Product);
void main(){
	Product pd;
	pd=storeProduct();	
	displayProduct(pd);	
}
Product storeProduct(){
	Product pd;
	printf("Enter the Id: ");
	scanf("%d",&pd.id);
	
	printf("Enter the Name: ");
	scanf("%s",pd.name);
	
	printf("Enter Quantity: ");
	scanf("%d",&pd.quantity);

	printf("Enter Price: ");
	scanf("%f",&pd.price);
	
	return pd;
}
void displayProduct(Product pd){
	printf("\nProduct Id: %d\nProduct Name: %s\nProduct Quantity:%d\nProduct Price: %f",pd.id,pd.name,pd.quantity,pd.price);
}