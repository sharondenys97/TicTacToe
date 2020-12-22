#include <ctype.h>
#include "ttt.h"

get_level()

{
    char level;
    int digit;

    do
	{
	printf("Enter level of difficulty : (1 - 6)\n");
	printf("1 --> least difficult, 6 --> most difficult\n");
	scanf("\n%c", &level);
	if (isdigit(level) != FALSE)
	    {
	    digit = atoi(&level);
	    if ((digit >= 1) && (digit <= 6))
		return(digit);
	    }
	}
    while (TRUE);
}
