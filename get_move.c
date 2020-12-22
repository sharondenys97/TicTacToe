#include <ctype.h>
#include "ttt.h"

get_move()

{
    char turn;

    do
	{
	printf("Enter : C --> Computer to start\n");
	printf("Enter : H --> Human to start\n");
	scanf("\n%c", &turn);
	turn = toupper(turn);
	}
    while ((turn != H_START) && (turn != C_START));

    return((turn == H_START) ? H_MOVE : C_MOVE);
}
