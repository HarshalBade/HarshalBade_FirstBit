#include<stdio.h>
char* mystrstr(char*,char*);
void main(){
	char str[15]="HarshalBade";
	
	char* res = mystrstr(str,"Ba");
	if(res!=NULL)
		printf("Found: %s",res);
	else
		printf("Not Found");		
}

char* mystrstr(char* str, char* str2){
	for(int i=0;str[i]!='\0';i++){
		int j=0;
		while(str[i+j]==str2[j] && str2[j]!='\0') 
            j++;
            
		if(str2[j]=='\0')
			return &str[i];
	}
	return NULL;
}