#include<stdio.h>
void main(){
	int s1,s2,s3;
	printf("Enter Three Sides of Triangle:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2 && s2==s3)
		printf("Triangle is Equilateral");
		else if(s1==s2||s2==s3||s1==s3)
			printf("Triangle is Isosceles");
			else
				printf("Triangle is Scalene");
}
