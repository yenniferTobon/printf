#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output according to a format
 *  @format: list arguments
 * Return: int
 **/
int _printf(const char *format, ...)
{
	va_list argument;
	int i = 0, size = 0;
	char *str;

	while (format == NULL)
		return (0);

	va_start(argument, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if(*(format + (i + 1)) == '\0')
<<<<<<< HEAD
			{
				if (i != 0)
					return (-1);
				else
					return (-1);
			}
			if(i == 0 && *(format + (i + 1)) == '\0')
=======
>>>>>>> 20ca76af0f069c4bbcb257dbe9bdea571e975249
				return (-1);
			switch (*(format + (i + 1)))
			{
				case 'c':
					_putchar((char)va_arg(argument, int));
					size++;
					i = i + 2;
					break;
				case 's':
					str = (va_arg(argument, char*));
					if (str == NULL)
					{
						str = "(nil)";
						break;
					}
					_puts(str);
					size = size + _strlen(str);
					i = i + 2;
					break;
				case '%':
					_putchar('%');
					size++;
					i = i + 2;
					break;
				/**case '%':*/
			}
		}
		_putchar(format[i]);
		size = size + 1;
	}
	va_end(argument);
	return (size);
}
