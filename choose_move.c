#include "ttt.h"

extern int totsquare;

choose_move(board, position, turn, level, alpha, beta)

char board[NUM_SQUARE][NUM_SQUARE];
int *position;
int turn;
int level;
int alpha, beta;

{
	int situation;
	int x, y;
	int i;
	int str_position;
	char stk_board[NUM_SQUARE][NUM_SQUARE];
	int str_value;
	int b_position;

	if (debug)
		{
		for (i = 0; i < level; i++)
			printf("   ");
		printf("L E V E L = %d\n", level);
		}
	if (turn == C_MOVE)
		str_value = MIN_VALUE;
	else
		str_value = MAX_VALUE;

	if ((nomove(board)) || (win_pos(board)))
		str_value = eval(board);
	else
		{
		if (turn == C_MOVE)
			for (b_position = 0; b_position < totsquare; b_position++)
				{
				postoxy(b_position, &x, &y);
				if (is_empty(board, x, y))
					{
					cp_board(board, stk_board);
					stk_board[x][y] = COMPUTER;
					situation = choose_move(stk_board, &str_position, H_MOVE, (level + 1), alpha, beta);
					if (debug)
						{
						for (i = 0; i < level; i++)
							printf("   ");
						printf("C L E V E L = %d position %d\n", level, b_position);
						}
					if (situation > str_value)
						{
						str_value = situation;
						*position = b_position;
						}
					if (situation > beta)
						break;
					else
						alpha = max(alpha, situation);
					}
				}
		else
			for (b_position = 0; b_position < totsquare; b_position++)
				{
				postoxy(b_position, &x, &y);
				if (is_empty(board, x, y))
					{
					cp_board(board, stk_board);
					stk_board[x][y] = OPPONENT;
					situation = choose_move(stk_board, &str_position, C_MOVE, (level + 1), alpha, beta);
					if (debug)
						{
						for (i = 0; i < level; i++)
							printf("   ");
						printf("H L E V E L = %d position %d\n", level, b_position);
						}
					if (situation < str_value) 
						{
						str_value = situation;
						*position = b_position;
						}
					if (situation < alpha)
						break;
					else
						beta = min(situation, beta);
					}
				}
		}
	return(str_value);
}
