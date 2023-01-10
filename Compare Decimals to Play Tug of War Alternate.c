#include <stdio.h>

int main(void){
	int n;
	int team1Total=0;
	int team2Total=0;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++){
		int w1=0;
		int w2=0;
		scanf("%d",&w1);
		team1Total+=w1;
		scanf("%d",&w2);
		team2Total+=w2;
	}
	if(team1Total>team2Total){
		printf("Team 1 has an advantage.\n");
	}else{
		printf("Team 2 has an advantage.\n");
	}
	printf("Total weight for team 1: %d \n",team1Total);
	printf("Total weight for team 2: %d\n",team2Total);
	return 0;
}
