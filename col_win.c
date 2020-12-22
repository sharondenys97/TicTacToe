#include "ttt.h"

col_win(i, board)

int i;
char board[NUM_SQUARE][NUM_SQUARE];

{
	if (board[0][i] != EMPTY)
		if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]))
			return(TRUE);
	return(FALSE);
}
