#include<stdio.h>
char* mystrcopy(char*,char*,int);
void main(){
	char str[15]="HarshalBade";
	char str2[10];
	
	mystrcopy(str2,str,7);
	printf("%s ",str2);
}
char* mystrcopy(char* str2,char* str,int num){
	int i=0;
	while(i<num){
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
}