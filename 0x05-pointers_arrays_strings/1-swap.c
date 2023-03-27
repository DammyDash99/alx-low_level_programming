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
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
