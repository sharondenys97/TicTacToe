#include "ttt.h"

cp_board(fr_board, to_board)

char fr_board[NUM_SQUARE][NUM_SQUARE];
char to_board[NUM_SQUARE][NUM_SQUARE];

{
	register i, j;

	for (i = 0; i < NUM_SQUARE; i++)
		for (j = 0; j < NUM_SQUARE; j++)
			to_board[i][j] = fr_board[i][j];
}
