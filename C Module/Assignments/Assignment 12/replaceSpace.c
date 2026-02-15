#include<stdio.h>
void main(){
	char str[]="Harshal Bade";
	printf("String: %s",str);
	
	for(int i=0;str[i]!='\0';i++){
    	if(str[i]==' ')
    		str[i]='_';
    }
    printf("\nString: %s",str);
}