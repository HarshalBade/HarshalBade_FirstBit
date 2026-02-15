#include<stdio.h>
char* mystrchr(char*,char);
void main(){
	char str[15]="HarshalBade";
	char ch='a';
	char* res = mystrchr(str,ch);
	if(res!=NULL)
		printf("%s",res);
	else
		printf("Not Match");			
}

char* mystrchr(char* str, char ch){
	for(int i=0;str[i]!='\0';i++)
		if(str[i]==ch)
			return &str[i];
		return NULL;
}