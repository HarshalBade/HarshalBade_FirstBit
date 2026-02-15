#include<stdio.h>
void main(){
	char str[100], ch;
	printf("Enter string: ");
    scanf("%[^\n]", str);
    
    int count=0, isWord=0;
    for(int i=0;str[i]!='\0';i++){
    	if(str[i]!=' ' && isWord==0){
    		count++;
			isWord=1;
		}
		if(str[i]==' ')
			isWord=0;
	}
	printf("Words count: %d", count);
}