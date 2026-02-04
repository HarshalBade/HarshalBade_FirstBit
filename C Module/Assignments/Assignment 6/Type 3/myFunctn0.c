//w/o return type & with param
#include<stdio.h>
void area(int r){
	float area = 3.14*r*r;	 
	printf("Area of Circle : %f", area);		
	}
void area1(int base,int height){
	float area1 = (base*height)/2;
	printf("\nArea of Triangle %f", area1);
}
void perimeter(int len, int wid){
	int peri = 2*(len+wid);
	printf("Perimeter of Rectangle %d", peri);
}
void avg(float n1,float n2,float n3,float n4,float n5){
	float avg = (n1+n2+n3+n4+n5)/5;
	printf("Average : %f", avg);
}
void squ_Cube(int num){
	int sq = num*num;
	int cu = num*num*num;
	
	printf("Square of Number %d is %d \nCube of Number %d is %d", num,sq,num,cu);
}
void hourTime(int time){
	int hour = time/60;
	int min = time%60;
	printf("Time is %d Hour %d Minutes", hour,min);
}
void percent(int math,int sci,int eng,int mar,int hin){
	float total = math+sci+eng+mar+hin;
	float percentage = total/5;
	printf("Total marks : %f and pass with %f percent", total,percentage);
}
void swap(int num1,int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("\n* After Swap * \nNum1 = %d", num1);
	printf("\nNum2 = %d",num2);
}
void temperature(int celsius){	
	float fehre = (celsius * 9/5) + 32;
	printf("Temperature : %f Fahrenheit", fehre);	
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
			area(radius);
		}else{
			int base, height;
			printf("Enter Base and Height: ");
			scanf("%d%d",&base,&height);
			area1(base,height);
		}
	}
	else if(choice==2){
		int length,width;
		printf("Enter the length and width: ");
		scanf("%d%d",&length,&width);
		perimeter(length,width);
	}
	else if(choice==3){
		float n1,n2,n3,n4,n5;
		printf("Enter the 5 values: ");
		scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
		avg(n1,n2,n3,n4,n5);
	}		
	else if(choice==4){
		int num;
		printf("Enter Number: ");
		scanf("%d",&num);
		squ_Cube(num);
	}
	else if(choice==5){
		int time;
		printf("Enter Time(minute): ");
		scanf("%d",&time);
		hourTime(time);
	}
	else if(choice==6){
		int math,science,english,marathi,hindi;
		printf("Enter marks: \n");
		printf("Maths");
		scanf("%d",&math);
		printf("Science");
		scanf("%d",&science);
		printf("English");
		scanf("%d",&english);
		printf("Marathi");
		scanf("%d",&marathi);
		printf("Hindi");
		scanf("%d",&hindi);
		
		percent(math,science,english,marathi,hindi);	
	}
	else if(choice==7){
		int num1,num2;
		printf("Enter Num1: ", num1);
		scanf("%d",&num1);
		printf("Enter Num2: ", num2);
		scanf("%d",&num2);
		swap(num1,num2);
	}
	else if(choice==8){
		int celsius;
		printf("Enter Temperature(celsius): ");
		scanf("%d",&celsius);
		temperature(celsius);
	}
	else
		printf("Invalid Choice..!");		
}
