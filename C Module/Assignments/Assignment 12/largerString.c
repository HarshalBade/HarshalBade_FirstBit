#include <stdio.h>
void main() {
    char str1[100], str2[100];
    int len1=0, len2=0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1]!='\0') 
		len1++;
    while(str2[len2]!='\0') 
		len2++;

    if(len1>len2)
        printf("Larger string: %s", str1);
    else if(len1<len2)
        printf("Larger string: %s", str2);
    else
		printf("Both string Equals"); 
}
