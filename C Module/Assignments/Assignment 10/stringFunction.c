#include<stdio.h>
#include<string.h>
void main(){
    char s1[50] = "Harshal"; 
    char s2[50] = "Bade";
    char s3[50];
    char s4[50] = "First Bit";
    char s5[50] = "Solutions";

    printf("strlen = %d\n", strlen(s1));         
    printf("sizeof = %d\n", sizeof(s1));           
                                       
    printf("strcpy : %s\n", strcpy(s3, s1));

    strncpy(s3, s2, 3);              // copy limited character
    s3[3] = '\0';//also try w/o this
    printf("strncpy : %s\n", s3);
                                      
    printf("strcat : %s\n", strcat(s1, s2)); 
    printf("strncat : %s\n", strncat(s1, "FirstBit", 5));

    printf("strcmp : %d\n", strcmp("abcd","abce"));      
    printf("strncmp : %d\n", strncmp("abcd","abce",3));
	
	// compare - no role of case sensitive
	printf("strcasecmp : %d\n", strcasecmp("HARSHAL","harsh"));
	printf("strncasecmp : %d\n", strncasecmp("HARSHAL","harsh",5));

    printf("strchr : %s\n", strchr("harshal",'h'));    // 1st Occurence
    printf("strrchr : %s\n", strrchr("harshal",'h'));  // last occurence

	char* str="Harry";
	char* res=strchr(str,'a');
	printf("Character found at index %d",res-str);
	
    printf("\nstrstr : %s\n", strstr(s5,"io"));          // substring
	
	printf("Reverse String: %s\n",strrev(s4));
	
	printf("Duplicate String: %s\n",strdup(str));
	
    char s7[50] = "CopyTest";
    memcpy(s3, s7, strlen(s7)+1);                    
    printf("memcpy : %s\n", s3);

    memmove(s3+4, s3, 4); //arithmetic pointer                             
    printf("memmove : %s\n", s3);

    memset(s3,'*',3);                 // fillMemory
    printf("memset : %s\n", s3);

    printf("memcmp : %d\n", memcmp("abc","abd",2));  

    char s8[50] = "  Trim  ";
    printf("strspn : %d\n", strspn(s8," ")); //count starting match
    printf("strcspn : %lu\n", strcspn(s8,"m")); //Counts chars until match

	//Finds first matching char from set
    printf("strpbrk : %s\n", strpbrk(s5,"aeiou"));
}
