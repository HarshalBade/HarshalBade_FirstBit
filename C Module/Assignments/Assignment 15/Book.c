#include<stdio.h>
typedef struct Book{
	int book_id;
	char book_name[20];
	char book_author[20];
	int price;
}Book;
void displayDetail(Book);
void main(){
	Book bk;
	printf("Enter Book Id: ");
	scanf("%d",&bk.book_id);
		
	printf("Enter Book Name: ");
	scanf("%s",bk.book_name);
		
	printf("Enter Book Author: ");
	scanf("%s",bk.book_author);
	
	printf("Enter Price: ");
	scanf("%d",&bk.price);
	
	displayDetail(bk);
}
void displayDetail(Book bk){
	printf("\nBook Id: %d\nBook Name: %s\nBook Author: %s\nPrice: %d",bk.book_id,bk.book_name,bk.book_author,bk.price);
}

