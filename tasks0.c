#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
        int i = 0, size = 0;

        while (format == NULL)
        {
                return (0);
        }
        for (i = 0; format[i] != '\0'; i++)
        {
                /**printf("hola%c\n",format[i]);**/
                size = size + 1;
                _putchar(format[i]);

                if (*(format + i) == '\n')
                {
                        _putchar('\n');
                        printf("%d\n",i);
                }
        }

        return size;
}

