#include<stdio.h>
char* mystrrchr(char*,char);
void main(){
	char str[15]="HarshalBade";
	char ch='a';
	char* res = mystrrchr(str,ch);
	if(res!=NULL)
		printf("%s",res);
	else
		printf("Not Match");			
}

char* mystrrchr(char* str, char ch){
	int i=0;
	while(str[i]!='\0')
		i++;
	for(int j=i-1;j>=0;j--)
		if(str[j]==ch)
			return &str[j];
		return NULL;
}