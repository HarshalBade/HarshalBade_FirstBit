// with return type & w/o param
#include<stdio.h>
float area(){
	float r=9;
	float  pi=3.14;
	float area = pi*r*r;	 
	return area;
}
float area1(){
	float base = 5;
	float height = 15;
	float area1 = (base*height)/2;
	return area1;
}
float perimeter(){
	int length = 5;
	int width = 10;
	int peri = 2*(length+width);
	return peri;
}
float avg(){
	float n1=10,n2=12,n3=15,n4=11,n5=16;
	
	float avg = (n1+n2+n3+n4+n5)/5;
	return avg;
}
void squ_Cube(){
	int num = 5;
	int sq = num*num;
	int cu = num*num*num;
	
	printf("Square of Number %d is %d \nCube of Number %d is %d", num,sq,num,cu);
}
void time(){
	int time = 345;
	int hour = time/60;
	int min = time%60;
	printf("Time is %d Hour %d Minutes", hour,min);
}
void percent(){
	int math = 90;
	int science = 78;
	int english= 84;
	int marathi = 89;
	int hindi = 76;
	
	float total = math+science+english+marathi+hindi;
	float percentage = total/5;
	
	printf("Total marks : %f and pass with %f percent", total,percentage);
}
void swap(){
	int num1=10, num2=25, temp;

	printf("Num1 = %d", num1);
	printf("\nNum2 = %d", num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\n* After Swap * \nNum1 = %d", num1);
	printf("\nNum2 = %d",num2);
}
float temperature(){
	int celsius=30;	
	printf("Temperature : %d Celsius\n", celsius);

	float fehre = (celsius * 9/5) + 32;	
	return fehre;
}

void main(){
	int choice;
	printf("1.Area\n2.Perimeter\n3.Average\n4.Sqaure And Cube\n");
	printf("5.Time Coverter\n6.Percentage of Student\n7.Swaping\n8.Temperature\n");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice==1){
		int ch;
		printf("Enter 1 for Circle and 2 for Triangle: ");
		scanf("%d",&ch);
		if(ch==1)
			printf("Area of Circle: %f",area());
		else
			printf("Area of Triangle: %f",area1());
	}
	else if(choice==2)
		printf("Perimeter of rectangle: %f",perimeter());	
	else if(choice==3)
		printf("Average: %f",avg());
	else if(choice==4)
		squ_Cube();
	else if(choice==5)
		time();
	else if(choice==6)
		percent();
	else if(choice==7)
		swap();
	else if(choice==8)
		printf("Temperature : %f Fahrenheit", temperature());
	else
		printf("Invalid output");
}
