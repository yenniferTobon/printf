#include "holberton.h"
#include <stdio.h>

/**
 * int_len - Counts the lenght of ints.
 * @l: int.
 * Return: 0.
 */

int int_len(int l)
{
	int n = 1;

	while (l / 10 != 0)
	{
		l = l / 10;
		n++;
	}
	if (l < 0)
	{
		n++;
	}
	return (n);
}
