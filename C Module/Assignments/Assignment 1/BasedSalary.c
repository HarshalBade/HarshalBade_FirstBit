#include<stdio.h>
void main(){
	int basic=10000;
	int da, ta, hra;
	if(basic<=5000){
		da = basic * 0.10;
		ta = basic * 0.20;
		hra = basic * 0.25;
	}else{
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	printf("da: %d\nta: %d\nhra: %d", da,ta,hra);
	int total = basic+da+ta+hra;
	printf("\nTotal salary : %d", total);
}
