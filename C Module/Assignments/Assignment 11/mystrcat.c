#include<stdio.h>
char* mystrcat(char*,char*);
void main(){
	char str[10]="harshal";
	char str2[] = "Bade";
	printf("Append: %s",mystrcat(str,str2));
}
char* mystrcat(char* str,char* str2){
	int i=0;
	while(str[i]!='\0')
		i++;
		
	for(int j=0;str2[j]!='\0';j++)
		str[i++]=str2[j];
		
	str[i]='\0';
	return str;					
}