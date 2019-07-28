#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list argument;
        int i = 0, size = 0, j = 0;
	char *str;

        while (format == NULL)
        {
                return (0);
        }

	va_start(argument, format);
        for (i = 0; format[i] != '\0'; i++)
        {
                size = size + 1;

              /**  if (*(format + i) == '\n')
                {
                        _putchar('\n');
                }*/
		if (*(format + i) == '%' && (*(format + (i + 1)) == 'c'))
		{
			_putchar((char)va_arg(argument, int));
			i = i + 2;
		}
		if (*(format + i) == '%' && (*(format + (i + 1)) == 's'))
		{
			str = (va_arg(argument, char*));
			while (str[j] != '\0' && str != NULL)
			{
				_putchar(str[j]);
				j++;
			}
			i = i + 2;
		}
		_putchar(format[i]);
	}
	va_end(argument);
        return size;
}

