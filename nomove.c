#include "ttt.h"

nomove(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	register i, j;

	for (i = 0; i < NUM_SQUARE; i++)
		for (j = 0; j < NUM_SQUARE; j++)
			if (is_empty(board, i, j)) return(FALSE);
	return(TRUE);
}
