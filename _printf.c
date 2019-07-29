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
	int i = 0, size = 0, j = 0;
	char *str;

	while (format == NULL)
		return (0);

	va_start(argument, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			switch (*(format + (i + 1)))
			{
				case 'c':
					_putchar((char)va_arg(argument, int));
					size++;
					break;
				case 's':
					str = (va_arg(argument, char*));
					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					j = 0;
					while (str[j] != '\0' && str != NULL)
					{
						_putchar(str[j]);
						size++;
						j++;
					}
					break;
				case '%':
					_putchar('%');
					size++;
					break;
			}
			i = i + 2;
		}
		_putchar(format[i]);
		size = size + 1;
	}
	va_end(argument);
        return (size);
}

