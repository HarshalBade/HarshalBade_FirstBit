#include<stdio.h>
typedef struct Student{
	int roll_no;
	char name[10];
	int marks;
}Student;

void main(){
	Student s;
	printf("Enter the Roll No: ");
	scanf("%d",&s.roll_no);
	
	printf("Enter the Name: ");
	scanf("%s",s.name);
	
	printf("Enter the Marks: ");
	scanf("%d",&s.marks);
	
	printf("\nStudent\nRoll no: %d\nName: %s\nMarks: %d", s.roll_no,s.name,s.marks);
}
