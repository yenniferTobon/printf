#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _switch - evaluate cases
 * @format: list arguments
 * @size: add the character print
 * @i: count
 * @argument: list argument
 * Return: int
 **/

void _switch(int *size, int *i, const char *format, va_list argument)
{
	char *str;

	switch (format[*i + 1])
	{
		case 'c':
			_putchar((char)va_arg(argument, int));
			*size = *size + 1;
			*i = *i + 2;
			break;
		case 's':
			str = (va_arg(argument, char*));
			if (str == NULL)
			{
				*size = -1;
				break;
			}
			_puts(str);
			*size = *size + _strlen(str);
			*i = *i + 2;
			break;
		case '%':
			_putchar(format[*i + 1]);
			*size = *size + 1;
			*i = *i + 2;
			break;
		default:
			_putchar('%');
			*size = *size + 1;
			*i = *i + 1;
			break;
	}
}

/**
 * _printf - produces output according to a format
 *  @format: list arguments
 * Return: int
 **/
int _printf(const char *format, ...)
{
	va_list argument;
	int i = 0, size = 0;

	if (format == NULL)
	{
		size = -1;
		return (size);
	}

	va_start(argument, format);
	while (format[i] != '\0' && format)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				size = -1;
				return (size);
			}
			_switch(&size, &i, format, argument);
		}
		else
		{
			_putchar(format[i]);
			size = size + 1;
			i++;
		}
	}
	va_end(argument);
	return (size);
}
