#include<stdio.h>
int mystrncpm(char*,char*,int);
void main(){
	char str[10]="firstbit";
	char str2[] = "first";

	printf("Compare: %d",mystrncpm(str,str2,5));
}
int mystrncpm(char* str,char* str2,int num){
	for(int i=0; i<num; i++){
		if(str[i]!=str2[i])
			return 1;
		if(str[i]=='\0')
			return 0;
	}	
	return 0;
}