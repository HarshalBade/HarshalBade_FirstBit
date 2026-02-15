#include<stdio.h>
int mylen(char*);
void main(){
	char str[10]="harshal";
	
	int len=mylen(str);
	printf("Length: %d",len);
}

int mylen(char* str){
	int i=0;
	while(str[i]!='\0')
		i++;
		
	return i;
}