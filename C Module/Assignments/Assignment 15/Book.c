#include<stdio.h>
typedef struct Book{
	int book_id;
	char book_name[20];
	char book_author[20];
	int price;
}Book;
void displayDetail(Book);
void main(){
	Book book;
	printf("Enter Book Id: ");
	scanf("%d",&book.book_id);
		
	printf("Enter Book Name: ");
	scanf("%s",book.book_name);
		
	printf("Enter Book Author: ");
	scanf("%s",book.book_author);
	
	printf("Enter Price: ");
	scanf("%d",&book.price);
	
	displayDetail(book);
}
void displayDetail(Book book){
	printf("\nBook Id: %d\nBook Name: %s\nBook Author: %s\nPrice: %d",book.book_id,book.book_name,book.book_author,book.price);
}

