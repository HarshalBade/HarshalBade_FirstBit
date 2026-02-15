#include<stdio.h>
char* mystrcopy(char*,char*);
void main(){
	char str[10]="harshal";
	char str2[10];
	
	mystrcopy(str2,str);
	printf("Copy String: %s",str2);
}
char* mystrcopy(char* str2,char* str){
	int i=0;
	while(str[i]!='\0'){
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
}
