#include "ttt.h"

display(board)

char board[NUM_SQUARE][NUM_SQUARE];

{
	register i, j;
	char put_char[2];
	int position = 0;

	put_char[1] = NULLCHAR;
	printf("\n\n\n");
	for (i = 0; i < NUM_SQUARE; i++)
		{
		printf("                ");
		for (j = 0; j < NUM_SQUARE; j++)
			{
			position++;
			if (board[i][j] == EMPTY) 
				sprintf(put_char, "%d", position);
			else 
				{
				put_char[0] = board[i][j];
				put_char[1] = NULLCHAR;
                }
			printf("%s ", put_char);
			if (j != (NUM_SQUARE -1))
				printf("|");
			}
		if (i != (NUM_SQUARE - 1))
			printf("\n                ---------\n");
		}
	printf("\n\n");
}
