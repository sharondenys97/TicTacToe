#include "ttt.h"

eval(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	int i;
	int c_point, h_point;

	c_point = 0;  h_point = 0;

	for (i = 0; i < NUM_SQUARE; i++)
		if (row_win(i, board))
			if (board[i][0] == COMPUTER) 
				c_point++;
			else
				h_point++;

	for (i = 0; i < NUM_SQUARE; i++)
		if (col_win(i, board))
			if (board[0][i] == COMPUTER) 
				c_point++;
			else
				h_point++;

	if (right_diag(board))
			if (board[0][0] == COMPUTER) 
				c_point++;
			else
				h_point++;

	if (left_diag(board))
			if (board[0][2] == COMPUTER) 
				c_point++;
			else
				h_point++;

	return((c_point - h_point));
}
