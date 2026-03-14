#include<stdio.h>
#include<string.h>
typedef struct Product{
    int id;
    char name[20];
    int quantity;
    float price;
}Product;

void storeProduct(Product*);
void displayProduct(Product);
void main(){
	Product pd;
	storeProduct(&pd);	
	displayProduct(pd);	
}
void storeProduct(Product* pd){
	printf("Enter Id: ");
	scanf("%d",&pd->id);
	
	printf("Enter Name: ");
	scanf("%s",pd->name);
	
	printf("Enter Quantity: ");
	scanf("%d",&pd->quantity);

	printf("Enter Price: ");
	scanf("%f",&pd->price);
}
void displayProduct(Product pd){
	printf("\nProduct Id: %d\nProduct Name: %s\nProduct Quantity:%d\nProduct Price: %f",pd.id,pd.name,pd.quantity,pd.price);
}