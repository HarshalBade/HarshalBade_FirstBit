#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the Three Numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y){
		if(x>z){
			printf("%d is Greater",x);
		}
		else{
			printf("%d is Greater",z);
		}
	}else{
		if(y>z){
			printf("%d is Greater",y);
		}else{
			printf("%d is Greater",z);
		}
		
	}
}
