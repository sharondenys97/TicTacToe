#include "ttt.h"

row_win(i, board)

int i;
char board[NUM_SQUARE][NUM_SQUARE];

{
	if (board[i][0] != EMPTY)
		if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]))
			return(TRUE);
	return(FALSE);
}
