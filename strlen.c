#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: char input for length
 *
 * Return: tamano as int
 */

int _strlen(char *s)
{
	int i = 0, tamano = 0;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			tamano = tamano + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	return (tamano);
}
