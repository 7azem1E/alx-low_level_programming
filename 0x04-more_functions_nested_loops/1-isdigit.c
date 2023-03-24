#include "main.h"

/**
 * _isdigit - chechs c is a digit or not
 *
 * @c: input for c
 *
 * Return: 1 if c is a digit, 0 if its not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
