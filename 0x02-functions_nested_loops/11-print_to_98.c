#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 *
 * @n: integer to be compared
 *
 */
void print_to_98(int n)
{
    for (; n <= 98; n++)
    {
        printf("%d", n);
        if (n != 98)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}
