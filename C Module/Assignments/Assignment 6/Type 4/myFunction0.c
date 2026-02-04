//with return type & with param
#include<stdio.h>
float area(int r){
	float area = 3.14*r*r;	 
	return area;
}
float area1(int base,int height){
	float area1 = (base*height)/2;
	return area1;
}
float perimeter(int length,int width ){
	int peri = 2*(length+width);
	return peri;
}
float avg(float n1,float n2,float n3,float n4,float n5){
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
float temperature(int celsius){
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
		if(ch==1){
			int radius;
			printf("Enter radius: ");
			scanf("%d",&radius);
			printf("Area of Circle : %f", area(radius));
		}else{
			int base, height;
			printf("Enter Base and Height: ");
			scanf("%d%d",&base,&height);
			printf("\nArea of Triangle %f", area1(base,height));
		}
	}
	else if(choice==2){
		int length,width;
		printf("Enter the length and width: ");
		scanf("%d%d",&length,&width);
		printf("Perimeter of rectangle: %f",perimeter(length,width));
	}	
	else if(choice==3){
		float n1,n2,n3,n4,n5;
		printf("Enter the 5 values: ");
		scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
		printf("Average: %f",avg(n1,n2,n3,n4,n5));	
	}
	else if(choice==4)
		squ_Cube();
	else if(choice==5)
		time();
	else if(choice==6)
		percent();
	else if(choice==7)
		swap();
	else if(choice==8){
		int celsius;
		printf("Enter Temperature(celsius): ");
		scanf("%d",&celsius);
		printf("Temperature : %f Fahrenheit", temperature(celsius));
	}	
	else
		printf("Invalid output");
}
