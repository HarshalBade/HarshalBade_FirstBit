#include<stdio.h>
char* mystrrev(char*);
void main(){
	char str[] = "Harshal";
	printf("Reverse String: %s",mystrrev(str));
}
char* mystrrev(char* str){
	static char rev[10];
	int len=0;
	while(str[len]!='\0')
			len++;
	for(int i=0,j=len-1;i<len;i++,j--){
		rev[i]=str[j];
	}
	rev[len]='\0';
	return rev;
}