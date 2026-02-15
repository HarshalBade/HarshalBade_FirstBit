#include<stdio.h>
#include<string.h>
void main() {
    char str[100], temp;

    printf("Enter string: ");
    scanf("%s", str);

	int len = strlen(str);
	
    temp = str[0];
    str[0] = str[len-1];
    str[len-1] = temp;

    printf("Result: %s", str);
}