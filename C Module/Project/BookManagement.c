#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Book{
	int book_id;
	char book_name[30];
	char book_author[20];
	char category[20];
	double rating;
	int price;
}Book;

void addBook(Book*,int*,int);
int searchBookById(Book*,int*,int);
void searchBookByName(Book*,int*,char*);
void updateBook(Book*,int);
void removeBook(Book*,int*,int);
void bookByAutherName(Book*,int*);
void bookByCategory(Book*,int*);
void sortBook(Book*,int*,int);
void displayBook(Book*,int);
void displayAllBook(Book*,int*);
void main(){
	int cindex=0,size=2,ch,idx;
	char searchName[30];
	Book* book = (Book*)malloc(sizeof(Book)*size);
	
	while(1){
		printf("\n- - - - - - - - - - - -\n");
		printf("1. Add Book");
		printf("\n2. Search Book");
		printf("\n3. Update Book");
		printf("\n4. Delete Book");
		printf("\n5. Show Auther Books");
		printf("\n6. Show Books By Category");
		printf("\n7. Show Sorted Books ");
		printf("\n8. Show All Books ");
		printf("\n9. Exit\nPress : ");
		scanf("%d",&ch);
		printf("- - - - - - - - - - - -");
		
		if(ch==1){	
			if(cindex>=size){
				size*=2;
				book=(Book*)realloc(book,sizeof(Book) * size);
				printf("\nArray Full and Reallocated...!\n");
			}				
			printf("\nEnter Record -->\n");
			addBook(book,&cindex,size);
		}
		else if(ch==2){
			if(cindex == 0){
				printf("\nBook Record is Empty..!\n");
				continue;
			}
			int choose;
			printf("\nSearch by...");
			printf("\n1.Id\n2.Name\nPress-> ");
			scanf("%d",&choose);
			if(choose==1){
			    printf("Enter Book Id: ");
			    scanf("%d",&idx);
			    idx = searchBookById(book,&cindex,idx);
			
			    if(idx==-1)
			        printf("\nBook Record Not Present...!\n");
			    else
			        displayBook(book, idx);
			}
			else if(choose==2){
				printf("Enter Book Name: ");
				getchar();  
				fgets(searchName, sizeof(searchName), stdin);
				searchName[strcspn(searchName, "\n")] = '\0';	
				
				searchBookByName(book,&cindex,searchName);
			}
			else
				printf("Invalid Choice..!\n");	
				
		}
		else if(ch==3){	
			if(cindex == 0){
			    printf("\nBook Record is Empty!\n");
			    continue;
			}
			printf("\nEnter Book id: ");
			scanf("%d",&idx);
			
			idx=searchBookById(book,&cindex,idx);
				
			if(idx==-1)					
				printf("\nBook Record Not Present...!\n");
			else{
				displayBook(book,idx);
				updateBook(book,idx);
			}
		}
		else if(ch==4){
			if(cindex == 0){
			    printf("\nBook Record is Empty!\n");
			    continue;
			}else{
				printf("\nDeleting...");
				printf("\nEnter Book id: ");
				scanf("%d",&idx);
				idx=searchBookById(book,&cindex,idx);
					
				if(idx==-1)
					printf("\nBook Record Not Present...!\n");
				else{
					displayBook(book, idx);
					removeBook(book,&cindex,idx);
					printf("\nRecord Deleted Successfully..!\n");
				}
			}
		}
		else if(ch==5){
			if(cindex == 0){
				printf("\nBook Record is Empty..!\n");
				continue;
			}
				bookByAutherName(book,&cindex);				
		}
		else if(ch==6){
			if(cindex == 0){
				printf("\nBook Record is Empty..!\n");
				continue;
			}else
				bookByCategory(book,&cindex);
		}
		else if(ch==7){
			if(cindex == 0){
				printf("\nBook Record is Empty..!\n");
				continue;
			}else{
				int sortOpt;
				printf("\n* * *");
				printf("\n1. Price High -> Low");
			    printf("\n2. Price Low -> High");
			    printf("\n3. Rating High -> Low");
			    printf("\n4. Rating Low -> High");
			    printf("\nEnter choice: ");
				scanf("%d",&sortOpt);
				printf("* * *");
				
				sortBook(book,&cindex,sortOpt);
			}
		}
		else if(ch==8){
			printf("\n* * * Books Record * * * \n");
			displayAllBook(book,&cindex);
			printf("* * * * * * * * * * * * \n");
		}
		else if(ch==9)
			break;
		else
			printf("Invalid Choice..!\n");
	}
}
void addBook(Book* book,int *cindex,int size){
	printf("Book Id: ");
	scanf("%d",&book[*cindex].book_id);
			
	printf("Book Name: "); 
	getchar();
	fgets(book[*cindex].book_name, sizeof(book[*cindex].book_name), stdin);
	book[*cindex].book_name[strcspn(book[*cindex].book_name, "\n")] = '\0';
			
	printf("Book Author: ");
	fgets(book[*cindex].book_author, sizeof(book[*cindex].book_author), stdin);
	book[*cindex].book_author[strcspn(book[*cindex].book_author, "\n")] = '\0';
		
	printf("Book Category: \n---");
	printf("\n  Science Fiction\n  Crime Story\n  Horror\n  Thriller\n  Classic\n  Love Story\n  Fantasy\n--> ");	
	fgets(book[*cindex].category, sizeof(book[*cindex].category), stdin);
	book[*cindex].category[strcspn(book[*cindex].category, "\n")] = '\0';
	
	do{
	    printf("Rating (1-5): ");
	    scanf("%lf",&book[*cindex].rating);
	
	    if(book[*cindex].rating < 1 || book[*cindex].rating > 5){
	        printf("Invalid Rating..! \n");
    	}
	}while(book[*cindex].rating < 1 || book[*cindex].rating > 5);
		
	printf("Price: ");
	scanf("%d",&book[*cindex].price);
	
	printf("\nRecord Inserted Successfully..!\n");
	(*cindex)++;	
}
int searchBookById(Book* book,int* cindex,int idx){
	for(int i=0;i<*cindex;i++){
		if(idx==book[i].book_id)
			return i;
	}
	return -1;
}
void searchBookByName(Book* book,int* cindex,char* name){
	int flag=0;
	for(int i=0;i<*cindex;i++){
		if(_stricmp(name,book[i].book_name)==0){
			printf("\nId: %d", book[i].book_id);
            printf("\nName: %s", book[i].book_name);
            printf("\nAuthor: %s", book[i].book_author);
            printf("\nCategory: %s", book[i].category);
            printf("\nRating: %.1f", book[i].rating);
            printf("\nPrice: %d\n\n", book[i].price);

            flag = 1;
        }
	}
	if(flag == 0)
        printf("\nBook Record Not Present...!\n");
}
void updateBook(Book* book,int idx){
	int ch;
	while(1){
		printf("\nWhat you want to Update...");
		printf("\n1.Name\n2.Author\n3.Category\n4.Rating\n5.Price\n6.Back\nPress-> ");
		scanf("%d",&ch);
		if(ch==1){
			printf("\nBook Name: ");
			getchar();
			fgets(book[idx].book_name, sizeof(book[idx].book_name), stdin);
			book[idx].book_name[strcspn(book[idx].book_name, "\n")] = '\0';
			printf("Record Updated Successfully..!\n");
		}
		else if(ch==2){
			printf("\nAuthor: ");
			getchar();
			fgets(book[idx].book_author, sizeof(book[idx].book_author), stdin);
			book[idx].book_author[strcspn(book[idx].book_author, "\n")] = '\0';
			printf("Record Updated Successfully..!\n");
		}
		else if(ch==3){
			printf("\nCategory: \n---");
			getchar();
			printf("\n  Science Fiction\n  Crime Story\n  Horror\n  Thriller\n  Classic\n  Love Story\n  Fantasy\n--> ");	
			fgets(book[idx].category, sizeof(book[idx].category), stdin);
			book[idx].category[strcspn(book[idx].category, "\n")] = '\0';
			printf("Record Updated Successfully..!\n");
		}
		else if(ch==4){
			do{
			    printf("Rating (1-5): ");
			    scanf("%lf",&book[idx].rating);
			
			    if(book[idx].rating < 1 || book[idx].rating > 5){
			        printf("Invalid Rating..! \n");
		    	}
			}while(book[idx].rating < 1 || book[idx].rating > 5);
			
			printf("Record Updated Successfully..!\n");
		}
		else if(ch==5){
			printf("\nPrice: ");
			scanf("%d",&book[idx].price);
			printf("Record Updated Successfully..!\n");
		}
		else if(ch==6){
			break;
		}
		else
			printf("\nInvalid choice..!\n");
	}
}
void removeBook(Book* book,int* cindex,int idx){
	if(*cindex == 0){
        printf("\nNo Books Available!\n");
        return;
    }
		for(int i=idx;i<*cindex-1;i++){
			book[i].book_id=book[i+1].book_id;
			strcpy(book[i].book_name,book[i+1].book_name);
			strcpy(book[i].book_author,book[i+1].book_author);
			strcpy(book[i].category,book[i+1].category);
			book[i].rating=book[i+1].rating;
			book[i].price=book[i+1].price;
		}	
		(*cindex)--;	
}
void bookByAutherName(Book* book,int* cindex){
	int flag=0;
	char authName[20];
		printf("\nEnter Auther Name: "); 
		getchar();
		fgets(authName, sizeof(authName), stdin);
		authName[strcspn(authName, "\n")] = '\0';
		
	for(int i=0;i<*cindex;i++){
		if(_stricmp(book[i].book_author,authName)==0){
			printf("\nBook Id: %d",book[i].book_id);		
			printf("\nBook Name: %s",book[i].book_name);				
			printf("\nBook Category: %s",book[i].category);
			printf("\nRating: %.1f",book[i].rating);					
			printf("\nPrice: %d",book[i].price);
			
			flag=1;
		}
	}
	if(flag==0)	
		printf("\nNo Books Available!\n");
}
void bookByCategory(Book* book,int* cindex){
	int flag=0;
	char category[20];
		printf("\nEnter Category: "); 
		getchar();
		fgets(category, sizeof(category), stdin);
		category[strcspn(category, "\n")] = '\0';
		
	for(int i=0;i<*cindex;i++){
		if(_stricmp(book[i].category,category)==0){
			printf("\nBook Id: %d",book[i].book_id);		
			printf("\nBook Name: %s",book[i].book_name);				
			printf("\nBook Author: %s",book[i].book_author);
			printf("\nRating: %.1f",book[i].rating);					
			printf("\nPrice: %d\n",book[i].price);
			
			flag=1;
		}
	}
	if(flag==0)	
		printf("\nNo Books Available!\n");
}
void sortBook(Book* book, int* cindex, int choice){
    if(*cindex == 0){
        printf("\nNo Books Available!\n");
        return;
    }

    Book temp[*cindex];
    for(int i=0;i<*cindex;i++)
        temp[i] = book[i];

    for(int i=0;i<*cindex-1;i++){ //iteration
        for(int j=0;j<*cindex-i-1;j++){
            int swap=0;
            if(choice==1 && temp[j].price<temp[j+1].price)
                swap=1;
            else if(choice==2 && temp[j].price>temp[j+1].price)
                swap=1;
            else if(choice==3 && temp[j].rating<temp[j+1].rating)
                swap=1;
            else if(choice==4 && temp[j].rating>temp[j+1].rating)
                swap=1;

            if(swap){
                Book t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    printf("\n--- Sorted Books ---\n");
    for(int i=0;i<*cindex;i++){
        printf("\nId: %d", temp[i].book_id);
        printf("\nName: %s", temp[i].book_name);
        printf("\nAuthor: %s", temp[i].book_author);
        printf("\nCategory: %s", temp[i].category);
        printf("\nRating: %.1f", temp[i].rating);
        printf("\nPrice: %d\n", temp[i].price);
    }
}
void displayBook(Book* book,int index){	
	printf("\nId: %d", book[index].book_id);
    printf("\nName: %s", book[index].book_name);
    printf("\nAuthor: %s", book[index].book_author);
    printf("\nCategory: %s", book[index].category);
    printf("\nRating: %.1f", book[index].rating);
    printf("\nPrice: %d\n\n", book[index].price);
}
void displayAllBook(Book* book,int* cindex){
	if(*cindex == 0){
        printf("\nBooks Record is Empty..!\n");
        return;
    }
		
	for(int i=0;i<3;i++){  //top 3 only
		printf("\nId: %d", book[i].book_id);
        printf("\nName: %s", book[i].book_name);
        printf("\nAuthor: %s", book[i].book_author);
        printf("\nCategory: %s", book[i].category);
        printf("\nRating: %.1f", book[i].rating);
        printf("\nPrice: %d\n\n", book[i].price);
	}
}
