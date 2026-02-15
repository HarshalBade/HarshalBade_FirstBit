#include<stdio.h>
void main(){
	char str[20], res[20];
	printf("Enter string: ");
    scanf("%s", str);
	
	int j=0;
	for(int i=0;str[i]!='\0';i++) 
        if(i%2==0)
            res[j++]=str[i];
    res[j]='\0';

    printf("Character at Odd Index: %s",res);
}