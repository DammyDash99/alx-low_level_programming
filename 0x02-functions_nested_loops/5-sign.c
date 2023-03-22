#include "main.h"
/**
 * print_sign - main function
 *
 * @n: character to be checked
 *
 * Return: returns possitve when >,0 when equal toand negative when <
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
