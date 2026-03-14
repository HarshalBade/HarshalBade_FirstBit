#include<stdio.h>
struct Student{
	int roll_no;
	char name[10];
	int marks;
};
void storeStudent(struct Student*);
void displayStudent(struct Student);
void main(){
	struct Student s;
	storeStudent(&s);
	displayStudent(s);
}
void storeStudent(struct Student* s){
	printf("Enter Roll No: ");
	scanf("%d",&s->roll_no);
	
	printf("Enter Name: ");
	scanf("%s",s->name);
	
	printf("Enter Marks: ");
	scanf("%d",&s->marks);
}
void displayStudent(struct Student s){
	printf("\nRoll no: %d\nName: %s\nMarks: %d\n", s.roll_no,s.name,s.marks);
}
