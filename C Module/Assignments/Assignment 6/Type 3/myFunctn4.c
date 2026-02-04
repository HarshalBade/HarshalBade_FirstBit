//Assignment 4// w/o return type & with param
#include<stdio.h>
void armstrongNum(int range){
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
void perfectNum(int range){
	for(int j=1;j<=range;j++){
		int sum=0;
		for(int i=1;i<j;i++){
			if(j%i==0)
				sum+=i;	
		}
		if(sum==j)
			printf("%d ",sum);
	}
}
void primeNum(int range){
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
void strongNum(int range){	
	for(int j=1;j<=range;j++){
		int num=j;
		int sum=0;
		while(num!=0){	
		int rem=num%10;
			int fact=1;
			for(int i=1;i<=rem;i++){
				fact=fact*i;
			}			
	 		sum=sum+fact;
	 		num=num/10;
		}
		if(j==sum)
			printf("%d ",j);
	}
}
void main(){
	int choice;
	printf("1.Armstrong Number\n2.Perfect Number\n3.Prime Number\n4.Strong Number\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	int range;
	printf("Enter Range: ");
	scanf("%d",&range);
	
	if(choice==1){
		printf("Armstrong Number Between 1 to %d:\n",range);
		armstrongNum(range);
	}
	else if(choice==2){
		printf("Perfect Number between 1 to %d:\n",range);
		perfectNum(range);
	}	
	else if(choice==3){
		printf("Prime Number Between 1 to %d:\n",range);
		primeNum(range);
	}
	else if(choice==4){
		printf("Strong Number between 1 to %d:\n",range);
		strongNum(range);
	}
}
