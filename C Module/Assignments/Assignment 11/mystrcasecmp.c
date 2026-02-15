#include <stdio.h>
int mystrcasecmp(char*, char*);
char lower(char);
void main() {
    char str1[20] = "HARSH";
    char str2[20] = "harsh";

    printf("strcasecmp: %d", mystrcasecmp(str1,str2));
}
int mystrcasecmp(char* str1, char* str2){
    int i = 0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        char ch1 = lower(str1[i]);
        char ch2 = lower(str2[i]);

        if(ch1 != ch2)
            return ch1-ch2;

        i++;
    }
    return str1[i]-str2[i];
}
char lower(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;
    return ch;
}