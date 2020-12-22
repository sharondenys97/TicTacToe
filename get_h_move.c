#include "ttt.h"

extern int totsquare;

get_h_move(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	int pos, x, y;

	while (TRUE)
		{
		printf("Enter a position from 1 to %d\n", totsquare);
		scanf("\n%d", &pos);
		postoxy((pos - 1), &x, &y);
		if (is_empty(board, x, y)) return((pos - 1));
		}
}
