#include<stdio.h>
#include<string.h>
void main(){
	char str[20];
	int count=0;
	printf("Enter string: ");
    scanf("%s", str);
    
    for(int i=0;str[i]!='\0';i++)
    	if(strchr("aeiouAEIOU",str[i])!=NULL)
    		count++;
	
    printf("Vowels count: %d", count);
}
