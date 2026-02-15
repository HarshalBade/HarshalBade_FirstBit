#include<stdio.h>
char* mystrncat(char*,char*,int);
void main(){
	char str[10]="harshal";
	char str4[] = "Bade";
	
	printf("Append: %s",mystrncat(str,str4,3));
}
char* mystrncat(char* str,char* str2,int num){
	int i=0;
	while(str[i]!='\0')
		i++;
		
	for(int j=0;j<num;j++)
		str[i++]=str2[j];
			
	str[i]='\0';
	
	return str;					
}