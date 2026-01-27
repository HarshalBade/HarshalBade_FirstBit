#include<stdio.h>
void main(){
	int range;
	printf("Enter Range: ");
	scanf("%d",&range);
	printf("Prime Number Between 1 to %d:\n",range);
	
	for(int j=1;j<=range;j++){
		int num=j;
		int count=0;
		if(num<2){
			count++;
		}else{
			for(int i=2;i<num;i++){
				if(num%i==0)
					count++;
			}
		}	
		if(count==0)
			printf("%d ",num);
	}
}
