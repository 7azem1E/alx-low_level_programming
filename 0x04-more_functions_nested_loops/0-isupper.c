#include "main.h"

/**
 * main - check the code.
 *
 * @c: the input for the alphapet
 *
 * Return: 1 if its uppercaser, 0 if its no
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
