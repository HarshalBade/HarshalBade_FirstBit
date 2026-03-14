#include<stdio.h>
typedef struct Student{
	int roll_no;
	char name[10];
	int marks;
}Student;

Student* storeStudent(Student*);
void displayStudent(Student*);
void main(){
	Student arr[5];
	storeStudent(arr);
	printf("\n * Students *");
	displayStudent(arr);
}
Student* storeStudent(Student* arr){
	for(int i=0;i<5;i++){
		printf("\nEnter Roll No: ");
		scanf("%d",&arr[i].roll_no);
		
		printf("Enter Name: ");
		scanf("%s",arr[i].name);
		
		printf("Enter Marks: ");
		scanf("%d",&arr[i].marks);
	}
	return arr;
}
void displayStudent(Student* arr){
	for(int i=0;i<5;i++)
		printf("\nRoll no: %d\nName: %s\nMarks: %d\n", arr[i].roll_no,arr[i].name,arr[i].marks);
}
