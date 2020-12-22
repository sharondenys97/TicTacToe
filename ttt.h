#ifndef ttt.h
#define ttt.h
#define C_MOVE       0              /* computer's move  */
#define H_MOVE       1              /* human's move */
#define H_START      'H'            /* Human to start */
#define C_START      'C'            /* Computer to start */
#define TRUE          1
#define FALSE         0
#define MAX_VALUE     1000          /* initial value (max) for game tree */
#define MIN_VALUE     -1000         /* initial value (min) for game tree */
#define ALPHA_VALUE   -1000         /* initial value for alpha-beta prune */
#define BETA_VALUE    1000          /* initial value for alpha-beta prune */
#define NUM_SQUARE    3             /* array of 3 */
#define OPPONENT      'H'           /* opponent's sign */
#define COMPUTER      'C'           /* computer's sign */
#define EMPTY         ' '           /* empty square */
#define C_WIN           1           /* computer win position */
#define C_DRAW          0           /* computer draw position */
#define C_LOSE          -1          /* computer lose position */
#define NULLCHAR      '\0'
#define UNKNOWN        -2           /* some unknown evaluation value */

#define max(a, b)              ((a > b) ? a : b)
#define min(a, b)              ((a > b) ? b : a)
#define is_empty(_board, _x, _y)  ((_board[_x][_y] == EMPTY) ? TRUE : FALSE)



short srch_level;       /* search level for game tree */

int debug;
int max_fns;
int fn_index;

#endif ttt.h
