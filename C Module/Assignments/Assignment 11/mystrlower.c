#include<stdio.h>
void mystrlower(char*);
void main(){
	char str[] = "FirstBit";
	
	mystrlower(str);
	printf("Lowercase: %s",str);
}
void mystrlower(char* str){
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]>= 'A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
}