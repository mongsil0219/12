#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_number(void)
{
	int selNum=0;
	
	do {
		printf("select a number : ");
		scanf("%d", &selNum);
		fflush(stdin);
		
		if (selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is  not on the board! select other one.\n", selNum);
		}
	} while(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT );
	
	return selNum;
}


int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("================================\n");
	printf("           BINGO GAME           \n");
	printf("================================\n");
	
	int selNum;
	//game k
	bingo_init();
	bingo_print();
	selNum = get_number();
	bingo_inputNum(5);
	bingo_print();
	bingo_inputNum(12);	
	bingo_print();

	//initialize bingo board
	/* while ·Î ¹Ýº¹ ( game is no end)
	 printf( bingo board)
	 printf("number of completed line)
	 printf("select a number : ")
	 scanf( ) 
	while  
	
	*/
	//ending
	printf("\n\n\n\n\n\n\n\n");
	printf("================================\n");
	printf("        CONGRATULATION!!        \n");
	printf("================================\n");
	
	
	
	
	return 0;
}
