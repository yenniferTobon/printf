#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _porce_printf - produces output according to a format
 *  @format: list arguments
 * Return: void
 **/
void _porce_printf(int i, const char *format, ...)
{
	_putchar(format[i]);
}
