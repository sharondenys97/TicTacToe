#include "ttt.h"

postoxy(pos, x, y)

int pos;
int *x, *y;

{
	switch (pos)
		{
		case 0 : *x = 0;  *y = 0; return;
		case 1 : *x = 0;  *y = 1; return;
		case 2 : *x = 0;  *y = 2; return;
		case 3 : *x = 1;  *y = 0; return;
		case 4 : *x = 1;  *y = 1; return;
		case 5 : *x = 1;  *y = 2; return;
		case 6 : *x = 2;  *y = 0; return;
		case 7 : *x = 2;  *y = 1; return;
		case 8 : *x = 2;  *y = 2; return;
		}
}
