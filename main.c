#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("================================\n");
	printf("           BINGO GAME           \n");
	printf("================================\n");
	
	//game 
	bingo_init();
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
