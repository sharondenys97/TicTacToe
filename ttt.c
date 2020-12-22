#include "ttt.h"

int totsquare = NUM_SQUARE * NUM_SQUARE;

main(argc, argv)

int argc;
char *argv[];

{
	char board[NUM_SQUARE][NUM_SQUARE];
	char stk_board[NUM_SQUARE][NUM_SQUARE];
    int position;
    int situation;
	int x, y;
	int turn;
	int who_wins;

	int chk_predefined;
	int h_start_first;

    system("clear");

    debug = (argc == 2) ? TRUE : FALSE;

    init(board);
	display(board);

    turn = get_move();
	if (turn == H_MOVE)
		{
		h_start_first = TRUE;
		chk_predefined = TRUE;
		}
	else
		{
		h_start_first = FALSE;
		chk_predefined = FALSE;
		}

	if (turn == C_MOVE)
		{
		board[0][0] = COMPUTER;
		printf("I choose position 1 \n\n");
		sleep(2);
		}

	turn = H_MOVE;

    display(board);

    while (! nomove(board))
		{
		if (turn == C_MOVE)
			{
			if ((h_start_first) && (chk_predefined))
				{
				if (found_def(board))
					position = 4;
				else
					{
					cp_board(board, stk_board);
					choose_move(stk_board, &position, C_MOVE, 1, ALPHA_VALUE, BETA_VALUE);
					}
				chk_predefined = FALSE;
				h_start_first = FALSE;
				}
			else
				{
				cp_board(board, stk_board);
				choose_move(stk_board, &position, C_MOVE, 1, ALPHA_VALUE, BETA_VALUE);
				}
			postoxy(position, &x, &y);
			board[x][y] = COMPUTER;
			printf("I choose position %d  \n\n", (position + 1));
			sleep(2);
			}
		else
			{
			position = get_h_move(board);
			postoxy(position, &x, &y);
			board[x][y] = OPPONENT;
			}
		display(board);
		if (win_pos(board)) break;
		turn = (turn == C_MOVE) ? H_MOVE : C_MOVE;
		}
	if ((who_wins = eval(board)) == C_WIN)
		printf("I win\n");
	else
		if (who_wins == C_LOSE)
			printf("You win\n");
		else
			printf("Draw\n");
}
