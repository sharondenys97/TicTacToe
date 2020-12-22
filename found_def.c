#include "ttt.h"

found_def(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	if ((board[0][0] == OPPONENT) ||
		(board[0][2] == OPPONENT) ||
		(board[2][0] == OPPONENT) ||
		(board[2][2] == OPPONENT)) return(TRUE);
	return(FALSE);
}
