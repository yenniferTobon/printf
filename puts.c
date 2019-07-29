#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: char input, text to print
 */

void _puts(char *str)
{
	int tamano = 0;

	while (*(str + tamano) != '\0')
	{
		_putchar(*(str + tamano));
		tamano = tamano + 1;
	}
}
