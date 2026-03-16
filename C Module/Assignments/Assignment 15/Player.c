#include<stdio.h>
typedef struct Player{
	char name[20];
	int matches;
	int runs;
	int wickets;
}Player;
void storeData(Player*);
void displayData(Player*);
void maxRuns(Player*);
void maxWicket(Player*);
void main(){
	Player player[10];
	printf("Enter Players Data ->");
	storeData(player);
	printf("\n* Players Info *");
	displayData(player);
	printf("* ------------ *\n");
	maxRuns(player);
	maxWicket(player);
}
void storeData(Player* player){
	for(int i=0;i<4;i++){
		printf("\nName: ");
		scanf("%s",player[i].name);
			
		printf("Matches: ");
		scanf("%d",&player[i].matches);
			
		printf("Runs: ");
		scanf("%d",&player[i].runs);
			
		printf("Wickets: ");
		scanf("%d",&player[i].wickets);
	}
}
void displayData(Player* player){
	for(int i=0;i<4;i++){
		printf("\nName: %s",player[i].name);
		printf("\nMatches: %d",player[i].matches);	
		printf("\nRuns: %d",player[i].runs);	
		printf("\nWickets: %d\n",player[i].wickets);
	}
}
void maxRuns(Player* player){
	int max=0;
	for(int i=0;i<4;i++){
		if(player[i].runs>player[max].runs)
			max=i;
	}
	printf("\n* Highest Runs in Career *");
	printf("\nName: %s",player[max].name);
	printf("\nMatches: %d",player[max].matches);	
	printf("\nRuns: %d\n",player[max].runs);		
}
void maxWicket(Player* player){
	int max=0;
	for(int i=0;i<4;i++){
		if(player[i].wickets>player[max].wickets)
			max=i;
	}
	printf("\n* Highest Wicket in Career *");
	printf("\nName: %s",player[max].name);
	printf("\nMatches: %d",player[max].matches);			
	printf("\nWickets: %d\n",player[max].wickets);
}