#include<stdio.h>
void main(){
	char str[]="HarshalBade";
	printf("String: %s",str);
	
	for(int i=0;str[i]!='\0';i++){
    	if(str[i]=='a')
    		str[i]='$';
    }
    printf("\nReplaced String: %s",str);
}