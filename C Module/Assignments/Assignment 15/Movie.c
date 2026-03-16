#include<stdio.h>
#include<string.h>
typedef struct Movie{
	char title[20];
	char director[20];
	int year;
	char genre[20];
}Movie;
void storeRecord(Movie* mov,int size){
		printf("\nMovie %d",size+1);
		printf("\nEnter Title: ");
		scanf("%s",mov[size].title);
			
		printf("Enter Director: ");
		scanf("%s",mov[size].director);
			
		printf("Enter Year: ");
		scanf("%d",&mov[size].year);
		
		printf("Enter Genre: ");
		scanf("%s",mov[size].genre);
}
int searchMovie(Movie* mov,char* name,int size){
	for(int i=0;i<size;i++){
		if(!(strcmp(mov[i].title,name)))
			return i;
	}
	return -1;
}
void updateMovie(Movie* mov,int index){
	printf("\nTitle: ");
	scanf("%s",mov[index].title);
			
	printf("Director: ");
	scanf("%s",mov[index].director);
			
	printf("Year: ");
	scanf("%d",&mov[index].year);
		
	printf("Genre: ");
	scanf("%s",mov[index].genre);
}
void main(){
	Movie movie[5];
	int ch,size=0,index;
	while(1){
		printf("\n---\n1.Add Movie \n2.Search Movie \n3.Update Movie\n4.Exit\nPress : ");
		scanf("%d",&ch);
		if(ch==1){
			if(size<5){
				storeRecord(movie,size);
				size++;
			}
			else
				printf("\nMovie list is full\n");
		}
		else if(ch==2){
			char name[20];
			printf("\nEnter movie name to search: ");
			scanf("%s",name);
			index = searchMovie(movie,name,size);
			if(index>=0)
				printf("\n***\nMovie Name: %s\nDirector: %s\nYear: %d\nGenre: %s\n",movie[index].title,movie[index].director,movie[index].year,movie[index].genre);
			else
				printf("Data Not Found\n");
		}
		else if(ch==3){
			char name[20];
			printf("\nEnter Movie title to Update: ");
			scanf("%s",name);
			index = searchMovie(movie,name,size);
			updateMovie(movie,index);
		}
		else if(ch==4)
			break;
		else
			printf("Invalid Choice..!\n");
	}
}