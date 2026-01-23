#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	int temp=num;
	while(num!=0){
		rem=num%10;
		sum+=rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
		printf("Number is Armstrong");
	else
		printf("Number is not Armstrong");
}
