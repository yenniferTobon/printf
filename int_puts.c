#include <stdio.h>
#include "holberton.h"

/**
 * printd - prints numbers.
 * @n: numbers.
 */
void printd(int n)
{
	if (n < 0)/**negativenumbers*/
	{
		_putchar('-');/**minus sign*/
		n =  -n;
	}
	if (n / 10)
		printd(n / 10);
		_putchar(n % 10 + '0');
}
