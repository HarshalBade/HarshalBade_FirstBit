#include<stdio.h>
void mystrupper(char*);
void main(){
	char str[] = "FirstBit";
	
	mystrupper(str);
	printf("Uppercase: %s",str);
}
void mystrupper(char* str) {
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}