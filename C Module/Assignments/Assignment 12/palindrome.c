#include<stdio.h>
#include<string.h>
void main(){
	char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    int len=strlen(str);
    int flag=1;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}