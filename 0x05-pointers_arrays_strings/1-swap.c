#include "main.h"
/**
 * swap_int - swaps int values
 *
 * @a: integer pointer
 *
 * @b: another integer pointer
 *
 */
void swap_int(int *a, int *b)
{
	int c = 5;
	int d = 8;
	*a = c;
	*b = d;
	*a = d;
	*b = c;
}
