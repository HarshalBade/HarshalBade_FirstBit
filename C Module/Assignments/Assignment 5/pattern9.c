/*  1 
	2 3 
	4 5 6 
	7 8 9 10 */
	
#include<stdio.h>
void main(){
	int n=4,ct=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++)
			printf("%d ",ct++);
		printf("\n");
	}
}
