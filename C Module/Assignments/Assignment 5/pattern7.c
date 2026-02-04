/*  * * * * * 
	* *     *        
	*   *   * 
	*     * * 
	* * * * *    */

#include<stdio.h>	
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(i==1||j==1||i==5||j==5||i==j)
				printf("* ");
			else
				printf("  ");
		printf("\n");
	}
} 
