/* Create a program to manage a to-do list. Implement a structure to store task details (task ID, description, and status). 
Write a menu-driven program to add, update, and display tasks. Use functions for each operation.  */

#include<stdio.h>
typedef struct Task{
	int task_id;
	char desciption[100];
	char status[20];
}Task;
void addTask(Task*,int*);
void displayTask(Task*,int*);
void updateTask(Task* ,int* , int);

void main(){
	Task task[5];
	int cindex=0;
	int ch;
	
	while(1){
		printf("\n- - - - -");
		printf("\n1. Add Task");
		printf("\n2. Update Task");
		printf("\n3. Display Task");
		printf("\n4. Exit\nPress-> ");
		scanf("%d",&ch);
		printf("- - - - -\n");
		
		if(ch==1){
			addTask(task,&cindex);
			printf("\nTask Inserted Successfully...\n");	
		}
		else if(ch==2){
			int idx;
			printf("\nEnter Task id to Update: ");
			scanf("%d",&idx);
			updateTask(task,&cindex,idx);
		}
		else if(ch==3){
			printf("* * * Today's Taks * * * \n");
			displayTask(task,&cindex);
		}
		else if(ch==4)
			break;
		else
			printf("\nInvalid Input..!");
	}
	
}

void addTask(Task* task,int* cindex){
	if(*cindex >= 5){
	    printf("Task list is full!\n");
	    return;
	}
	for(int i=*cindex;i<=*cindex;i++){
		printf("\nTask %d \n",(*cindex+1));
		printf("Id : ");
		scanf("%d",&task[i].task_id);
		
		printf("Description: ");
		scanf(" %[^\n]",task[i].desciption);
		
		printf("Status: ");
		scanf("%s",task[i].status);
	}
	(*cindex)++;
}
void updateTask(Task* task,int* cindex, int idx){
	int flag=0;
	for(int i=0;i<*cindex;i++){
		if(task[i].task_id==idx){
			printf("\nUpdating...");
			printf("\nTask id: %d",task[i].task_id);
			printf("\nDescription: ");
			scanf(" %[^\n]",task[i].desciption);
			
			printf("Status: ");
			scanf("%s",task[i].status);
			
			flag=1;
			break;
		}
		else
			flag=0;		
	}		
		if(flag==1)
			printf("\nTask Updated Successfully...\n");
		else
			printf("\nTask not present...\n");
}

void displayTask(Task* task,int* cindex){
	for(int i=0;i<*cindex;i++){
		printf("\nTask id: %d",task[i].task_id);
		printf("\nDescription: %s",task[i].desciption);
		printf("\nStatus: %s\n",task[i].status);
	}
}