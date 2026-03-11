#include<stdio.h>
struct Student{
	int roll_no;
	char name[10];
	int marks;
};
struct Student storeStudent();
struct Student displayStudent(struct Student);
void main(){
	struct Student s1,s2;
	s1=storeStudent();
	s1=displayStudent(s1);
	
	s2=storeStudent();
	displayStudent(s2);
}
struct Student storeStudent(){
	struct Student s1;
	printf("Enter the Roll No: ");
	scanf("%d",&s1.roll_no);
	
	printf("Enter the Name: ");
	scanf("%s",s1.name);
	
	printf("Enter the Marks: ");
	scanf("%d",&s1.marks);
	
	return s1;
}
struct Student displayStudent(struct Student s){
	printf("Roll no: %d\nName: %s\nMarks: %d\n\n", s.roll_no,s.name,s.marks);
	
	return s;
}