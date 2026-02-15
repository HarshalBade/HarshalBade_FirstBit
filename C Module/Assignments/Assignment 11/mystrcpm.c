#include<stdio.h>
int mystrcpm(char*,char*);
void main(){
	char str[10]="harshal";
	char str2[] = "Firstbit";
	
	printf("Compare: %d",mystrcpm(str,str2));
}
int mystrcpm(char* str,char* str2){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==str2[i])
			return 0;
		else
			return 1;
	}	
}