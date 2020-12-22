#include "ttt.h"

init(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	register i, j;

	for (i = 0; i < NUM_SQUARE; i++)
		for (j = 0; j < NUM_SQUARE; j++)
			board[i][j] = EMPTY;
}
