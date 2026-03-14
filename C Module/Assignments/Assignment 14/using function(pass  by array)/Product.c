#include<stdio.h>
#include<string.h>
typedef struct Product{
    int id;
    char name[20];
    int quantity;
    float price;
}Product;
Product* storeProduct(Product*,int);
void displayProduct(Product*,int);
void main(){
	Product product[10];
	int size;
	printf("Enter number Product to store: ");
	scanf("%d",&size);
	storeProduct(product,size);	
	printf("\n* Product Detail *");
	displayProduct(product,size);	
}
Product* storeProduct(Product* product,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter Id: ");
		scanf("%d",&product[i].id);
		
		printf("Enter Name: ");
		scanf("%s",product[i].name);
		
		printf("Enter Quantity: ");
		scanf("%d",&product[i].quantity);
	
		printf("Enter Price: ");
		scanf("%f",&product[i].price);
	}
	return product;
}
void displayProduct(Product* product,int size){
	for(int i=0;i<size;i++)
		printf("\nId: %d\nName: %s\nQuantity:%d\nPrice: %f\n",product[i].id,product[i].name,product[i].quantity,product[i].price);
}