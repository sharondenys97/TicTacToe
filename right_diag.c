#include "ttt.h"

right_diag(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	if (board[0][0] != EMPTY)
		if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
			return(TRUE);
	return(FALSE);
}
