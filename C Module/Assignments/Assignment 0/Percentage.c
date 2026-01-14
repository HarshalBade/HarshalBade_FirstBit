#include<stdio.h>
void main(){
	int math = 90;
	int science = 78;
	int english= 84;
	int marathi = 89;
	int hindi = 76;
	
	float total = math+science+english+marathi+hindi;
	float percentage = total/5;
	
	printf("Total marks : %f and pass with %f percent", total,percentage);
}
