#include<stdio.h>
int main()
{
	FILE *inp = fopen("quizs.txt", "r");
	int grade[50][5];
	
	for(int i=0; i<50; i++){
		
		for(int j=0; j<5; j++){ 
			
			fscanf(inp, "%d", &grade[i][j]);
		
		}
		
	}
	
	
	for(int i=0; i<50; i++){
			
			if(grade[i][2] == 25) printf("%d. students fourth quiz = %d \n",i, grade[i][3]);
	}
	
	
	
	return 0;
	
}
