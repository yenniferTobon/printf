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
 */

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
				_puts("(null)");
				*size = *size + _strlen("(null)");
			}
			else
			{
				_puts(str);
				*size = *size + _strlen(str);
			}
			*i = *i + 2;
			break;
		case '%':
			_putchar(format[*i + 1]);
			*size = *size + 1;
			*i = *i + 2;
		break;
		case 'd': case 'i':
			integers(size, i, argument);
			break;
		default:
			_putchar('%');
			*size = *size + 1;
			*i = *i + 1;
			break;
	}
}

/**
 * integers - Checks for integers.
 * @size: int.
 * @i: int.
 * @argument: va_list.
 */

void integers(int *size, int *i, va_list argument)
{
	int num;

	num = (va_arg(argument, int));
	printd(num);
	*size = *size + int_len(num);
	*i = *i + 2;
}

/**
 * _printf - produces output according to a format
 *  @format: list arguments
 * Return: int
 */

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
			if (format[i + 1] == '\0' && format[i - 1])
			{
				_switch(&size, &i, format, argument);
			}
			else if (format[i + 1] == '\0')
			{
				size = -1;
				return (size);
			}
			else
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
