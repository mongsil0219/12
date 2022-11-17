#include<stdio.h>
#include "bingoBoard.h"

#define BINGONUM_HOLE

int bingoBoard[N_SIZE][N_SIZE];


void bingo_init(void)
{
	int i,j;
	int cnt = 1;
	
	for(i=0;i<N_SIZE;i++)
		for(j=0;j<N_SIZE;j++)
		{
			bingoBoard[i][j] = cnt++;			
		}
}
void bingo_print(void)
{
	int i,j;
	printf("------------------------------\n");
	for(i=0;i<N_SIZE;i++){
		for(j=0;j<N_SIZE; j++){
			if(bingoBoard[i][j] == BINGONUM_HOLE)
				printf("X\t");
			else
				printf("%i\t", bingoBoard[i][j]);

		}
		printf("\n");	
	}
	printf("------------------------------\n");
}
void bingo_inputNumber(int sel){
	
	
}
int bingo_countCompletedLine(void){
	
	
}

