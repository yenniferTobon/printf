#include <stdio.h>
#include "holberton.h"

/**
 * printd - prints numbers.
 * @n: numbers.
 */

void printd(int n)
{
	unsigned int n1;

	if (n < 0)/**negativenumbers*/
	{
		_putchar('-');/**minus sign*/
		n1 = -n;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
		printd(n1 / 10);
		_putchar(n1 % 10 + '0');
}
