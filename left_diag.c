#include "ttt.h"

left_diag(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	if (board[0][2] != EMPTY)
		if ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))
			return(TRUE);
	return(FALSE);
}
