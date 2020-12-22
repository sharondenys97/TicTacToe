#include "ttt.h"

win_pos(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	int i;

	for (i = 0; i < NUM_SQUARE; i++)
		if (row_win(i, board))
			return(TRUE);
	for (i = 0; i < NUM_SQUARE; i++)
		if (col_win(i, board))
			return(TRUE);
	if (right_diag(board))
			return(TRUE);
	if (left_diag(board))
			return(TRUE);
	return(FALSE);
}
