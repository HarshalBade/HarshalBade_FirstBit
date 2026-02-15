#include<stdio.h>
void main(){
	char str[10], ch;
	printf("Enter string: ");
    scanf("%[^\n]", str);
	
    printf("Enter character: ");
    scanf(" %c", &ch);
    
    int flag=0;
    for(int i=0;str[i]!='\0';i++){
    	if(str[i]==ch){
    		printf("Character found at index %d\n",i);
    		flag=1;
    	}
	}
	if(flag==0)
        printf("Character not found");
}