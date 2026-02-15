#include<stdio.h>
void main(){
	char str[]="HarshalBade";
	printf("String: %s",str);
	
	int n;
	printf("\nEnter index to Remove: ");
    scanf("%d", &n);
	
	for(int i=n;str[i]!='\0';i++)
    	str[i]=str[i+1];

    printf("String: %s",str);
}