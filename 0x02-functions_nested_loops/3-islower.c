#include "main.h"
/**
 * _islower - checks for lower case character
 *
 * @c: charcter to be checked
 *
 * Return: returns 1 if operation is true,0 of false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
