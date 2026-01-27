#include<stdio.h>
void main(){
	int range;
	printf("Enter Range: ");
	scanf("%d",&range);
	printf("Armstrong Number Between 1 to %d:\n",range);
	
	for(int i=1;i<=range;i++){
		int temp=i;
		int rem,sum=0;
		while(temp!=0){
			rem=temp%10;
			sum+=rem*rem*rem;
			temp=temp/10;
		}
		if(i==sum)
			printf("%d ",i);
	}	
}
